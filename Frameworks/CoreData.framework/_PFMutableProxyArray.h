/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, _PFArray;

@interface _PFMutableProxyArray : NSMutableArray {
    NSInteger _cd_rc;
    NSUInteger _editCount;
    struct __CFArray { } *_indicesVeneer;
    NSUInteger _limit;
    NSUInteger _offset;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
}

- (void)_rehash;
- (void)addObject:(id)arg1;
- (id)arrayFromObjectIDs;
- (NSUInteger)count;
- (void)dealloc;
- (void)finalize;
- (NSUInteger)indexOfManagedObjectForObjectID:(id)arg1;
- (NSUInteger)indexOfObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObject:(id)arg1;
- (NSUInteger)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObjectIdenticalTo:(id)arg1;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)initWithPFArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)managedObjectIDAtIndex:(NSUInteger)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)release;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (id)retain;
- (NSUInteger)retainCount;
- (id)subarrayWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;

@end