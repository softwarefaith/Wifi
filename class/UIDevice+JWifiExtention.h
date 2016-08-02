//
//  UIDevice+JWifiExtention.h
//  Wifi
//
//  Created by 蔡杰 on 16/8/2.
//  Copyright © 2016年 蔡杰. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^FetchWifiInfo)(NSDictionary *wifiInfo);

@interface UIDevice (JWifiExtention)

#pragma mark -获取网卡信息
+ (NSDictionary *)fetchWifiInfo;

+ (NSString *)fetchBSSID;

+ (NSString *)fetchSSID;

+ (void)asynfetchWifiInfoWithResult:(FetchWifiInfo)fetchWifiInfo;

#pragma mark -网卡IP
+ (NSString *)fetchLocalIPAddress;

+ (NSMutableDictionary *)fetchLocalInfoForCurrentWiFi;

//公共WIFI名确定
+ (void)registerNetwork:(NSString *)ssid;


@end
