/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKChapter : NSObject <NSSecureCoding> {
    NSArray * _subchapters;
    NSString * _title;
    NSURL * _webURL;
}

@property (nonatomic, readonly, copy) NSDictionary *JSONRepresentation;
@property (nonatomic, copy) NSArray *subchapters;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSURL *webURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setSubchapters:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)subchapters;
- (id)title;
- (id)webURL;

@end