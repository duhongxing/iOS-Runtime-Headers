/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface MZAlertDialog : NSObject  {
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSString *_acceptButtonTitle;
}

@property(copy) NSString * title;
@property(copy) NSString * message;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * acceptButtonTitle;
@property(copy) id completionHandler;


- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;
- (id)acceptButtonTitle;
- (void)_runAsCFUserNotificationDisplayAlert;
- (BOOL)_runAsUIAlertView;
- (void)setAcceptButtonTitle:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)completionHandler;
- (id)title;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setTitle:(id)arg1;
- (void)showWithCompletionHandler:(id)arg1;

@end