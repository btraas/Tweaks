@interface MusicNowPlayingItemViewController : UIViewController <MusicNowPlayingVideoViewControllerDelegate> {
    ADBannerView * _adBannerView;
    MPArtworkCatalog * _artworkCatalog;
    UIImage * _artworkImage;
    id /* block */  _deferTransitionBlock;
    <MusicNowPlayingItemViewControllerDelegate> * _delegate;
    BOOL  _hasProperApplicationStateForWantingVideoLayer;
    BOOL  _hasVisibilityForWantingVideoLayer;
    MusicArtworkView * _imageView;
    MPAVItem * _item;
    unsigned int  _itemType;
    MusicNowPlayingVideoViewController * _videoViewController;
    BOOL  _wantsVideoLayer;
}

@property (nonatomic) BOOL canShowOverlayControls;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicNowPlayingItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic) BOOL overlayVideoControlsHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_itemArtworkDidChangeNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (id)_placeholderArtwork;
- (void)_playerFirstVideoFrameDidDisplayNotification:(id)arg1;
- (void)_removeAdBannerView;
- (void)_removeArtworkImageView;
- (void)_removeVideoViewController;
- (void)_setArtworkImage:(id)arg1;
- (void)_setWantsVideoLayer:(BOOL)arg1;
- (void)_updateArtworkCatalogWithReload:(BOOL)arg1;
- (void)_updateContentViewWithReload:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (void)_updateWantsVideoLayer;
- (id)artworkImage;
- (BOOL)canShowOverlayControls;
- (void)dealloc;
- (void)deferItemTransitionIfNeeded:(id /* block */)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)item;
- (void)overlayBackButtonTapped:(id)arg1;
- (BOOL)overlayVideoControlsHidden;
- (void)setCanShowOverlayControls:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverlayVideoControlsHidden:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (int)transitionFromItemViewController:(id)arg1;
- (BOOL)videoController:(id)arg1 shouldDisplayAlertForError:(id)arg2;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end