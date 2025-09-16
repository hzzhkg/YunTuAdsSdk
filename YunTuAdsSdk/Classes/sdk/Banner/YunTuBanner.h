//
//  YunTuBanner.h
//  YunTuAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class YunTuRequest;
@class YunTuBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol YunTuBannerDelegate <NSObject>

@optional

- (void)onAutoRefreshed:(YunTuBanner *)bannerAdView;

- (void)onAutoRefreshFail:(NSError *)error;

- (void)onBannerLoadSuccess:(YunTuBanner *)bannerAdView;

- (void)onBannerLoadError:(NSError *)error;

- (void)onBannerShown;

- (void)onBannerClicked;

- (void)onWillLeaveApplication;

- (void)onWillOpenFullScreen;
- (void)onCloseFullScreen;
- (void)onDidRemoved;
@end

@interface YunTuBanner : NSObject

@property (nonatomic, weak) id<YunTuBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(YunTuRequest *)request;

- (instancetype)initWithRequest:(YunTuRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadBannerAd;
- (BOOL)isReady;
- (UIView *)getView;
@end
NS_ASSUME_NONNULL_END
