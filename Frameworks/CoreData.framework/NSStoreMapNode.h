/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID, NSPersistentStoreMap, NSString, NSMutableDictionary;



@interface NSStoreMapNode : NSObject 
{
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    NSUInteger _version;
}

+ (void)initialize;

- (id)key;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)_relatedNodes;
- (id)configurationName;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;
- (id)destinationsForRelationship:(id)arg1;
- (void)_setMap:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (NSUInteger)_versionNumber;
- (const id*)knownKeyValuesPointer;
- (void)_setVersionNumber:(NSUInteger)arg1;
- (id)objectID;
- (id)entity;

@end