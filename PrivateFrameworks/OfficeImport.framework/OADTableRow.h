/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADTableRow : NSObject 
{
    NSMutableArray *mCells;
    float mHeight;
}


- (float)height;
- (id)cellAtIndex:(NSUInteger)arg1;
- (id)init;
- (void)dealloc;
- (NSUInteger)cellCount;
- (void)setHeight:(float)arg1;
- (id)addCell;

@end