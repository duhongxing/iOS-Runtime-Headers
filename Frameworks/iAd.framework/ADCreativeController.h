/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCreativeController : NSObject <ADWebProcessDelegate, WKNavigationDelegate> {
    BOOL  _browserContextControllerDidLoad;
    BOOL  _contentVisible;
    NSString * _creativeIdentifier;
    ADWebView * _creativeView;
    <ADCreativeControllerDelegate> * _delegate;
    BOOL  _isExpandedCreativePresented;
    id /* block */  _loadCompletion;
    ADAdImpressionPublicAttributes * _publicAttributes;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    ADTapGestureTimer * _tapGestureTimer;
    <ADWebProcessProxy> * _webProcessProxy;
}

@property (nonatomic) BOOL browserContextControllerDidLoad;
@property (getter=isContentVisible, nonatomic) BOOL contentVisible;
@property (nonatomic, copy) NSString *creativeIdentifier;
@property (nonatomic, readonly) ADWebView *creativeView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADCreativeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isExpandedCreativePresented;
@property (nonatomic, copy) id /* block */ loadCompletion;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *publicAttributes;
@property (nonatomic, retain) _WKRemoteObjectInterface *remoteObjectInterface;
@property (readonly) Class superclass;
@property (nonatomic, retain) ADTapGestureTimer *tapGestureTimer;

- (void)_callLoadCompletionWithError:(id)arg1;
- (id)_customUserAgentString;
- (id)_incrementCreativeIdentifier;
- (void)_requestOpenURL:(id)arg1;
- (void)_updateWebProcessProxyVisibility;
- (id)_userAgentForUserAgentString:(id)arg1;
- (void)adSpaceActionViewControllerWillDismiss:(id)arg1;
- (void)adSpaceActionViewControllerWillPresent:(id)arg1;
- (BOOL)browserContextControllerDidLoad;
- (BOOL)contentVisible;
- (id)creativeIdentifier;
- (id)creativeView;
- (void)dealloc;
- (id)delegate;
- (BOOL)isContentVisible;
- (BOOL)isExpandedCreativePresented;
- (void)loadAdImpression:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)loadCompletion;
- (id)publicAttributes;
- (id)remoteObjectInterface;
- (void)setBrowserContextControllerDidLoad:(BOOL)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setCreativeIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsExpandedCreativePresented:(BOOL)arg1;
- (void)setLoadCompletion:(id /* block */)arg1;
- (void)setPublicAttributes:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setTapGestureTimer:(id)arg1;
- (id)tapGestureTimer;
- (void)unregisterExportedObjectInterface;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end