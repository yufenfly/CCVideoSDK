//
//  CCToolBox.h
//  CCLiveVideoSDK
//
//  Created by zyh on 2019/12/26.
//  Copyright © 2019 chaungshiyun. All rights reserved.
//

#import <Foundation/Foundation.h>

//日志开关
#define CC_INTEGRATEDDEBUG

#ifdef CC_INTEGRATEDDEBUG
#define CC_Log(fmt, ...)  NSLog((@"===[lineNum:%d],===[function:%s]" fmt), __LINE__, __FUNCTION__,##__VA_ARGS__);  //带行数
#else
#define CC_Log(fmt, ...);
#endif

NS_ASSUME_NONNULL_BEGIN

@interface CCToolBox : NSObject
+ (NSString *)getiPhoneType;

+ (NSString *)doMD5Encode:(NSString *)str;
+ (NSString *)doBase64Encode:(NSString *)str;

+ (NSString *)getUTCFormateLocalDateStr:(NSString *)localDate;
+ (NSString *)getLocalDateStrFormateUTCDateStr:(NSString *)utcDate;

+ (NSString *)getUTCFormatDate:(NSDate *)localDate;
+ (NSDate *)getLocalDataFromUTCStr:(NSString *)utcStr;

+ (NSString *)getCurrentUTCFormatDate;

+(long long)getNowTimeTimes;

+ (NSString *)nullToString:(id)string;



@end

NS_ASSUME_NONNULL_END
