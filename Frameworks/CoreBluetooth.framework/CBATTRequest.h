/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBCentral, CBCharacteristic, NSData, NSNumber;

@interface CBATTRequest : NSObject {
    CBCentral *_central;
    CBCharacteristic *_characteristic;
    BOOL _ignoreResponse;
    unsigned int _offset;
    NSNumber *_transactionID;
    NSData *_value;
}

@property(retain) CBCentral * central;
@property(retain) CBCharacteristic * characteristic;
@property BOOL ignoreResponse;
@property unsigned int offset;
@property(retain) NSNumber * transactionID;
@property(copy) NSData * value;

- (id)central;
- (id)characteristic;
- (void)dealloc;
- (id)description;
- (BOOL)ignoreResponse;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned int)arg3 value:(id)arg4 transactionID:(id)arg5;
- (unsigned int)offset;
- (void)setCentral:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setIgnoreResponse:(BOOL)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setValue:(id)arg1;
- (id)transactionID;
- (id)value;

@end