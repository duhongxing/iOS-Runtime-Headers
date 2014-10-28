/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}

- (void)addObject:(id)arg1;
- (id)array;
- (BOOL)containsObject:(id)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)firstObject;
- (BOOL)hasObjects;
- (id)init;
- (void)insertFirstObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)objectEnumerator;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)reverseObjectEnumerator;

@end