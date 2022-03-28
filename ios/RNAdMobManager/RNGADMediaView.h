#import <React/RCTViewManager.h>
#import <React/RCTUIManager.h>
#import <React/RCTLog.h>
@import GoogleMobileAds;

@interface RNGADMediaView: UIView <GADVideoControllerDelegate>

@property (nonatomic) BOOL *pause;
@property (nonatomic) BOOL *muted;

@property (nonatomic, copy) RCTBubblingEventBlock onVideoPlay;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoPause;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoMute;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoStart;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoEnd;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoProgress;

- (void)getCurrentProgress;

@end
