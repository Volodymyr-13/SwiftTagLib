
import CxxTagLibBridge

public extension AudioFile {
    struct Metadata: CxxRepresentable, Hashable {
        // MARK: - Basic Properties shared across ID3v1, ID3v2 and some other Tags
        public var title: String = ""
        public var albumTitle: String = ""
        public var artist: String = ""
        public var genre: String = ""
        public var releaseDate: String = ""
        // MARK: - ID3v2 Properties
        public var composer: String = ""
        public var albumArtist: String = ""
        public var bpm: Int32 = 0
        public var rating: Int32 = 0
        public var trackNumber: Int32 = 0
        public var trackTotal: Int32 = 0
        public var discNumber: Int32 = 0
        public var discTotal: Int32 = 0
        public var lyrics: String = ""
        public var compilation: Bool = false
        /// International Standard Recording Code
        public var isrc: String = ""
        /// Media Catalog Number
        public var mcn: String = ""
        public var musicBrainzReleaseID: String = ""
        public var musicBrainzRecordingID: String = ""
        // MARK: - Attached Pictures
        public var attachedPictures: [AttachedPicture] = []
        // MARK: - Additional Metadata
        public var additional: [AdditionalMetadataPair] = []
        // MARK: - init
        @inlinable public init() {}

        @usableFromInline init(_ metadata: AudioMetadata) {
            title = String(metadata.title)
            albumTitle = String(metadata.albumTitle)
            artist = String(metadata.artist)
            genre = String(metadata.genre)
            releaseDate = String(metadata.releaseDate)
            composer = String(metadata.composer)
            albumArtist = String(metadata.albumArtist)
            bpm = metadata.beatPerMinute
            rating = metadata.rating
            trackNumber = metadata.trackNumber
            trackTotal = metadata.trackTotal
            discNumber = metadata.discNumber
            discTotal = metadata.discTotal
            lyrics = String(metadata.lyrics)
            compilation = metadata.compilation
            isrc = String(metadata.internationalStandardRecordingCode)
            mcn = String(metadata.mediaCatalogNumber)
            musicBrainzReleaseID = String(metadata.musicBrainzReleaseID)
            musicBrainzRecordingID = String(metadata.musicBrainzRecordingID)
            attachedPictures = metadata.attachedPictures.map(AttachedPicture.init)
            additional = metadata.additional.map(AdditionalMetadataPair.init)
        }

        @usableFromInline var cxxRepresentation: AudioMetadata {
            var metadata = AudioMetadata()
            metadata.title = std.string(title)
            metadata.albumTitle = std.string(albumTitle)
            metadata.artist = std.string(artist)
            metadata.genre = std.string(genre)
            metadata.releaseDate = std.string(releaseDate)
            metadata.composer = std.string(composer)
            metadata.albumArtist = std.string(albumArtist)
            metadata.beatPerMinute = bpm
            metadata.rating = rating
            metadata.trackNumber = trackNumber
            metadata.trackTotal = trackTotal
            metadata.discNumber = discNumber
            metadata.discTotal = discTotal
            metadata.lyrics = std.string(lyrics)
            metadata.compilation = compilation
            metadata.internationalStandardRecordingCode = std.string(isrc)
            metadata.mediaCatalogNumber = std.string(mcn)
            metadata.musicBrainzReleaseID = std.string(musicBrainzReleaseID)
            metadata.musicBrainzRecordingID = std.string(musicBrainzRecordingID)
            /// unfortunately this is the only way of converting Array of more complex types than int/bool/string
            /// to std::vector, generalization isn't possible yet. 22.11.2024
            var attachedPictures = AudioMetadata.AttachedPictures()
            self.attachedPictures.forEach { attachedPictures.push_back($0.cxxRepresentation) }
            metadata.attachedPictures = attachedPictures
            var additional = AudioMetadata.AdditionalMetadata()
            self.additional.forEach { additional.push_back($0.cxxRepresentation) }
            metadata.additional = additional
            return metadata
        }
    }
}

// MARK: - read
import Foundation.NSURL

extension AudioFile.Metadata {
    @usableFromInline static func read(
        from url: URL,
        format: AudioFile.Format
    ) throws(AudioFile.InitializationError) -> Self {
        let cString = std.string(url.path)
        var metadata = AudioMetadata()
        let implementation = format.implementationMetatype.init(cString)
        let outcome = implementation.readMetadata(&metadata)
        try AudioFile.InitializationError.throwIfNeeded(outcome)
        return .init(metadata)
    }
}

// MARK: - write
extension AudioFile.Metadata {
    @usableFromInline func write(
        to url: URL,
        format: AudioFile.Format
    ) throws(AudioFile.MetadataWritingError) {
        let cString = std.string(url.path)
        let implementation = format.implementationMetatype.init(cString)
        var metadata = cxxRepresentation
        let outcome = implementation.writeMetadata(&metadata)
        try AudioFile.MetadataWritingError.throwIfNeeded(outcome)
    }
}
