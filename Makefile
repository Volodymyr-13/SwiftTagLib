
xcframework:
	@command -v swift-create-xcframework >/dev/null 2>&1 || { echo "please install https://github.com/segment-integrations/swift-create-xcframework"; exit 1; }
	@command -v xcbeautify >/dev/null 2>&1 || { echo "please install https://github.com/cpisciotta/xcbeautify"; exit 1; }
	@rm -rf .build
	@rm -rf SwiftTagLib.xcframework
	@rm -rf SwiftTagLib.zip
	@rm -rf SwiftTagLib.sha256
	@rm -rf Package.resolved
	time swift-create-xcframework \
		--platform ios \
		--xcconfig xcframework.xcconfig \
		--xc-setting BUILD_LIBRARY_FOR_DISTRIBUTION=YES \
		--debug-symbols \
		--zip \
		| xcbeautify -q
	du -hs SwiftTagLib.zip

# should include DSYM, can toggle between --debug-symbols and --no-debug-sybmols
# not including DSYM saves about 80% of the size of XCFramework
# if macos is needed add --platform macos
