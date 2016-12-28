//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JPFBadgeNumberManager, JPFMessageCenter, JPFNetworkService, JPFPageFlowSession, JPFPushConfig, JPFTagAlias, JPFUserDefaults, NSNotificationCenter, NSNumber, NSString, NSTimer, NSURL;

@interface JPFClient : NSObject
{
    NSTimer *_deviceTokenStatusCheckTimer;
    long long _deviceTokenStatusCheckTimes;
    double _becomeActiveTime;
    _Bool _isSimulator;
    _Bool _deviceTokenUpdated;
    _Bool _isReportCrash;
    int _apsEvironment;
    NSURL *_emProvisionUrl;
    NSURL *_pushConfigUrl;
    NSString *_systemVersion;
    NSString *_bundleIdentifier;
    NSNumber *_bundleVersion;
    NSString *_modelName;
    JPFPushConfig *_pushConfig;
    JPFUserDefaults *_userDefaults;
    JPFTagAlias *_tagAliasMng;
    JPFMessageCenter *_messageCenter;
    JPFBadgeNumberManager *_badgeNumber;
    JPFPageFlowSession *_pageFlowController;
    NSNotificationCenter *_clientNotificationCenter;
    JPFNetworkService *_networkService;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedClient;
@property(readonly, retain, nonatomic) JPFNetworkService *networkService; // @synthesize networkService=_networkService;
@property(readonly, retain, nonatomic) NSNotificationCenter *clientNotificationCenter; // @synthesize clientNotificationCenter=_clientNotificationCenter;
@property(readonly, retain, nonatomic) JPFPageFlowSession *pageFlowController; // @synthesize pageFlowController=_pageFlowController;
@property(readonly, nonatomic) JPFBadgeNumberManager *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(readonly, nonatomic) _Bool isReportCrash; // @synthesize isReportCrash=_isReportCrash;
@property(readonly, nonatomic) _Bool deviceTokenUpdated; // @synthesize deviceTokenUpdated=_deviceTokenUpdated;
@property(readonly, nonatomic) _Bool isSimulator; // @synthesize isSimulator=_isSimulator;
@property(readonly, retain, nonatomic) JPFMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(readonly, retain, nonatomic) JPFTagAlias *tagAliasMng; // @synthesize tagAliasMng=_tagAliasMng;
@property(readonly, nonatomic) int apsEvironment; // @synthesize apsEvironment=_apsEvironment;
@property(readonly, retain, nonatomic) JPFUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, retain, nonatomic) JPFPushConfig *pushConfig; // @synthesize pushConfig=_pushConfig;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSNumber *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSURL *pushConfigUrl; // @synthesize pushConfigUrl=_pushConfigUrl;
@property(retain, nonatomic) NSURL *emProvisionUrl; // @synthesize emProvisionUrl=_emProvisionUrl;
- (void).cxx_destruct;
- (void)stopDeviceTokenUpdatedCheckTimer;
- (void)startDeviceTokenUpdatedCheckTimer;
- (void)checkDeviceTokenUpdated:(id)arg1;
- (id)stringWithDeviceToken:(id)arg1;
- (void)synchronizeData;
- (id)readRegistrationID;
- (void)setLatitude:(id)arg1;
- (void)setViewLogSecond:(id)arg1;
- (void)setViewStop:(id)arg1;
- (void)setViewStart:(id)arg1;
- (void)onDidBecomeActive;
- (void)handleRemoteNotification:(id)arg1;
- (void)setBadgeNumberReport:(id)arg1;
- (void)reportInactive:(id)arg1;
- (void)reportLaunch:(id)arg1;
- (void)setTagAlias:(id)arg1;
- (void)updateDeviceToken:(id)arg1;
- (void)close;
- (void)setup;
- (void)loadApsEnvironment;
- (_Bool)loadPushConfig;
- (void)removeCrashReport;
- (void)InitCrashReport;
- (void)setCrashLogON;
- (void)setCloseMode;
- (void)setDebugMode;
- (void)setRunInSimulator:(id)arg1;
- (void)dealloc;
- (id)init;

@end
