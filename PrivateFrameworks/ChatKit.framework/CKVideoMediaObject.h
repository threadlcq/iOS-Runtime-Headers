/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDictionary, NSString, UIImage;

@interface CKVideoMediaObject : CKAVMediaObject {
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
    UIImage *_videoPreviewImage;
}

+ (id)mimeTypesToFileExtensions;

- (void)_generatePreviewOnMainThreadForVideoFile:(id)arg1;
- (id)_newPreviewImageForIncomingVideoWithTailStyle:(NSInteger)arg1;
- (id)_newPreviewImageWithTailStyle:(NSInteger)arg1;
- (id)_newVideoPreviewImageForImage:(id)arg1 withTailStyle:(NSInteger)arg2;
- (id)_transcodeOptions;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (void)copyToPasteboard:(id)arg1;
- (void)dealloc;
- (id)effectiveExportedFilename;
- (id)filenameForMedia;
- (NSInteger)mediaType;
- (id)newPreview:(NSInteger)arg1 highlight:(BOOL)arg2;
- (id)optionsForMedia;
- (BOOL)shouldGeneratePreviewInBackground;
- (BOOL)shouldTranscodeForMMS;
- (unsigned long long)sizeInBytes;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (id)transcodeMimeType;
- (id)transcodePath;
- (double)transcodeStartTime;
- (id)transcodedFilename;
- (id)transcodedPathExtension;

@end