//
//  YunTuInterstitial.h
//  YunTuAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class YunTuRequest;
@protocol YunTuInterstitialAdDelegate <NSObject>
@optional
-(void) onInterstitialLoadSuccess:(NSString *) pid;
-(void) onInterstitialLoadError:(NSString *) pid error:(NSError *)error;
-(void) onInterstitialPlayStart;
-(void) onInterstitialPlayEnd;
-(void) onInterstitialClicked;
-(void) onInterstitialClosed;
-(void) onInterstitialSkiped;

@end

@interface YunTuInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<YunTuInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(YunTuRequest *)request;
- (BOOL)isReady;
- (void)loadInterstitialAd;
- (void)show:(UIViewController *)rootViewController;
@end
