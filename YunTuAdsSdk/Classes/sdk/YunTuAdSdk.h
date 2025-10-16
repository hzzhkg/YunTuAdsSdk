//
//  YunTuAdSdk.h
//  YunTuAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, YunTuAcceptStatus) {
    YunTuUnknown = 0,
    YunTuAccepted,
    YunTuDenied,
};

@interface YunTuAdSdk : NSObject
+(instancetype) shareInstance;
-(void)initWithAppId:(NSString *)appId;
-(void)setDebugMode:(BOOL)enable;
-(void)setGDPRStatus:(YunTuAcceptStatus)status;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end
