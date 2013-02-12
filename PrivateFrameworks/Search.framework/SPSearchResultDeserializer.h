/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class CPSearchMatcher, NSArray, NSString, SPSearchResult;

@interface SPSearchResultDeserializer : PBDataReader {
    NSUInteger _byteVector;
    NSString *_category;
    CPSearchMatcher *_diacriticMatcher;
    NSString *_displayIdentifier;
    NSUInteger _domain;
    CPSearchMatcher *_matcher;
    BOOL _munmapAtDealloc;
    NSUInteger _resultCount;
    NSArray *_resultOffsetVector;
    SPSearchResult *_sortA;
    SPSearchResult *_sortB;
}

@property(readonly) NSString *category;
@property(readonly) CPSearchMatcher *diacriticMatcher;
@property(readonly) NSString *displayIdentifier;
@property(readonly) CPSearchMatcher *matcher;
@property(readonly) SPSearchResult *sortA;
@property(readonly) SPSearchResult *sortB;
@property(readonly) NSUInteger domain;
@property(readonly) NSUInteger resultCount;

- (void)_prepareForRandomAccess;
- (id)category;
- (void)dealloc;
- (BOOL)deserializeResultAtIndex:(NSUInteger)arg1 toCursor:(id)arg2;
- (id)diacriticMatcher;
- (id)displayIdentifier;
- (NSUInteger)domain;
- (id)initWithMallocRegion:(NSUInteger)arg1 length:(NSUInteger)arg2;
- (id)initWithMappedRegion:(NSUInteger)arg1 length:(NSUInteger)arg2;
- (id)initWithSerializer:(id)arg1;
- (id)matcher;
- (NSInteger)read:(const char *)arg1 maxLength:(NSUInteger)arg2;
- (id)readBytes:(NSUInteger)arg1;
- (BOOL)readResultIntoCursor:(id)arg1;
- (NSUInteger)resultCount;
- (id)sortA;
- (id)sortB;
- (void)sortResultsByDate;
- (void)sortResultsUsingQueryString:(id)arg1;

@end