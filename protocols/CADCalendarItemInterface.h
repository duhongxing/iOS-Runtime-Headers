/* Generated by RuntimeBrowser.
 */

@protocol CADCalendarItemInterface

@required

- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(void *)arg1 entityType:(void *)arg2 fetchIdentifier:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSPredicate *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetCalendarItemWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { int x1; int x2; }, void*

@end