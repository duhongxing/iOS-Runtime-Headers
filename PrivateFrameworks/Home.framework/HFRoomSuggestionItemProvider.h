/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRoomSuggestionItemProvider : HFItemProvider {
    unsigned int  _suggestedRoomLimit;
    NSSet * _suggestionItems;
    <HFRoomSuggestionVendor> * _suggestionVendor;
}

@property (nonatomic) unsigned int suggestedRoomLimit;
@property (nonatomic, retain) NSSet *suggestionItems;
@property (nonatomic, retain) <HFRoomSuggestionVendor> *suggestionVendor;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setSuggestedRoomLimit:(unsigned int)arg1;
- (void)setSuggestionItems:(id)arg1;
- (void)setSuggestionVendor:(id)arg1;
- (unsigned int)suggestedRoomLimit;
- (id)suggestionItems;
- (id)suggestionVendor;

@end
