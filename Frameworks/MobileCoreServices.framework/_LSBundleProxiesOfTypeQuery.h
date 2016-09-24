/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSBundleProxiesOfTypeQuery : _LSQuery {
    BOOL  _legacySPI;
    unsigned int  _type;
}

@property (nonatomic, readonly) BOOL legacySPI;
@property (nonatomic, readonly) unsigned int type;

+ (id)queryWithType:(unsigned int)arg1 legacySPI:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (BOOL)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int x12; int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18[4]; unsigned int x19; unsigned int x20; unsigned char x21[3]; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 hiddenSystemAppIdentifiers:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)legacySPI;
- (unsigned int)type;

@end