//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (BTGHardware)
- (id)btg_wifiName;
- (id)btg_carrierRadioName;
- (id)btg_carrierName;
- (_Bool)btg_isJailbreak;
- (_Bool)btg_isRetinaDisplay;
- (id)btg_cpuType;
- (unsigned long long)btg_getSysInfo:(unsigned int)arg1;
- (id)btg_hwmodel;
- (id)btg_platform;
- (id)btg_getSysInfoByName:(const char *)arg1;
@end
