//
//  YunTuStorage.h
//  YunTuAdsSdk-iOS
//
//
#import "YunTuDto.h"
#import <Foundation/Foundation.h>

@interface YunTuStorage : NSObject
@property (nonatomic) int cps;
+(instancetype) shareInstance;
-(void) addStrategyDtos:(NSString *)adsId adDto:(YunTuDto *) yunTuDto;
-(YunTuDto *) getStrategy: (NSString *)adsId;
@end
