//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@class NSString;

@interface RequestBeanDeviceInfo : RequestBeanBase
{
    NSString *_sys_info;
    NSString *_sys_info_sign;
    long long _type;
    NSString *_userid;
}

@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *sys_info_sign; // @synthesize sys_info_sign=_sys_info_sign;
@property(copy, nonatomic) NSString *sys_info; // @synthesize sys_info=_sys_info;
- (void).cxx_destruct;
- (id)statistics_data;
- (long long)api_ver;
- (id)timestamp;
- (id)apiPath;
- (id)HOST;
- (id)SCHEME;

@end

