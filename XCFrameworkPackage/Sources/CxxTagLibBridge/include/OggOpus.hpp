
#import "AbstractAudioFile.hpp"
#import <taglib/opusfile.h>

namespace AudioFile {
    struct OggOpus final: public AbstractAudioFile<TagLib::Ogg::Opus::File> {
    public:
        using AbstractAudioFile::AbstractAudioFile;
    protected:
        using FileType = TagLib::Ogg::Opus::File;

        void read_metadata_implementation(FileType &file, AudioMetadata *metadata) const {
            if (file.tag()) {
                metadata->overlay(AudioMetadata::read_from_XiphComment(file.tag()));
            }
        }

        void write_metadata_implementation(FileType &file, AudioMetadata *metadata) const {
            metadata->write_to_XiphComment(file.tag());
        }
    };
}
