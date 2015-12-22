/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBuyButtonDescriptor : NSObject <NSCopying, NSMutableCopying> {
    NSString *_buttonText;
    int _buttonType;
    NSString *_confirmationText;
    unsigned int _elementType;
    long long _itemIdentifier;
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_variantIdentifier;
}

@property (nonatomic, readonly, copy) NSString *buttonText;
@property (nonatomic, readonly) int buttonType;
@property (nonatomic, readonly, copy) NSString *confirmationText;
@property (nonatomic, readonly) unsigned int elementType;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) NSString *variantIdentifier;

- (void).cxx_destruct;
- (id)buttonText;
- (int)buttonType;
- (BOOL)canPerformLocalActionWithItemState:(id)arg1;
- (BOOL)canPersonalizeUsingItemState:(id)arg1;
- (id)confirmationText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)elementType;
- (long long)itemIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)storeIdentifier;
- (id)variantIdentifier;

@end