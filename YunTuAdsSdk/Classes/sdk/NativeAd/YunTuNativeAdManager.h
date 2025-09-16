//
//  YunTuNativeAdManager.h
//  YunTuAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class YunTuRequest;
@class YunTuNativeAd;
@class YunTuNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol YunTuNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdsManagerSuccessToLoad:(YunTuNativeAdManager *)nativeAdsManager;
- (void)nativeAdsManagerdidFailWithError:(NSError *)error;

@end


@interface YunTuNativeAdManager : NSObject

@property (nonatomic, weak) id<YunTuNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(YunTuRequest *)request;

- (void)loadAdDataWithCount:(NSInteger)count;

- (NSArray<YunTuNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END

