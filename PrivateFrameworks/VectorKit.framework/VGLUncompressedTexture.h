/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLUncompressedTexture : VGLTexture  {
    struct CGImage { } *_image;
    char *_imageData;
    unsigned int _pixelFormat;
    unsigned int _colorFormat;
    struct CGImageBlockSet { } *_blockSetRef;
    BOOL _fastPath;
}


- (struct { float x1; float x2; float x3; float x4; })textureCoordinateRect;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithData:(id)arg1;

@end