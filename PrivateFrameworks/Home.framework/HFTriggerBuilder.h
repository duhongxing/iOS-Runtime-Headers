/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerBuilder : HFItemBuilder {
    HFMutableSetDiff * _actionSetBuilders;
    HFTriggerAnonymousActionSetBuilder * _anonymousActionSetBuilder;
    NSArray * _conditions;
    <HFTriggerBuilderContextProviding> * _context;
    BOOL  _enabled;
    NSString * _name;
}

@property (nonatomic, retain) HFMutableSetDiff *actionSetBuilders;
@property (nonatomic, readonly) NSArray *actionSets;
@property (nonatomic, retain) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (nonatomic, retain) NSArray *conditions;
@property (nonatomic, retain) <HFTriggerBuilderContextProviding> *context;
@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) BOOL hasActions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) BOOL requiresConfirmationToRun;
@property (nonatomic, readonly) BOOL secureActionsRequireConfirmationToRun;
@property (nonatomic, readonly) HMTrigger *trigger;

+ (Class)homeKitRepresentationClass;
+ (BOOL)supportsConditions;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_performValidation;
- (id)_updateActionSets;
- (id)_updateAnonymousActionSet;
- (id)_updateConditions;
- (id)_updateEnabledState;
- (id)_updateName;
- (id)actionSetBuilders;
- (id)actionSets;
- (void)addAction:(id)arg1;
- (void)addActionSet:(id)arg1;
- (void)addCondition:(id)arg1;
- (id)anonymousActionSetBuilder;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)conditions;
- (id)context;
- (id)deleteTrigger;
- (BOOL)enabled;
- (BOOL)hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 context:(id)arg2;
- (BOOL)markTriggerAsHomeAppCreated;
- (id)name;
- (id)naturalLanguageNameOfType:(unsigned int)arg1;
- (void)removeAction:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeCondition:(id)arg1;
- (BOOL)requiresConfirmationToRun;
- (BOOL)secureActionsRequireConfirmationToRun;
- (void)setActionSetBuilders:(id)arg1;
- (void)setAnonymousActionSetBuilder:(id)arg1;
- (void)setConditions:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setMarkTriggerAsHomeAppCreated:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;
- (void)updateAction:(id)arg1;
- (void)updateActionSet:(id)arg1;
- (void)updateCondition:(id)arg1;

@end
