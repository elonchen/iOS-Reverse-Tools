//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JPFCaughtExceptionHandler : NSObject
{
}

+ (id)backtrace;
- (id)changeStackTraceToStringFrom:(id)arg1;
- (void)handleException:(id)arg1;
- (_Bool)p_compareOldExceptionTrace:(id)arg1 withCurrentTrace:(id)arg2 withOldMessage:(id)arg3 withCurrentMessage:(id)arg4;
- (void)validateAndSaveCriticalApplicationData;

@end
