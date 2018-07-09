/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageContainer : NSObject {
    struct CGImage { } * _CGImage;
    CIImage * _CIImage;
    NSData * _data;
    void * _ioSurface;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) void*ioSurface;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;

- (struct CGImage { }*)CGImage;
- (id)data;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 ioSurface:(void*)arg2 CIImage:(id)arg3 backingData:(id)arg4 uniformTypeIdentifier:(id)arg5 size:(struct CGSize { double x1; double x2; })arg6;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)initWithUIImage:(id)arg1 backingData:(id)arg2 uniformTypeIdentifier:(id)arg3;
- (void*)ioSurface;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)uniformTypeIdentifier;

@end