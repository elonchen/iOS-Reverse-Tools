//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@class NSString;

@interface RequestBeanDoApply : RequestBeanBase
{
    NSString *_apply_id;
    long long _tag;
    NSString *_job_id;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *apply_id; // @synthesize apply_id=_apply_id;
- (void).cxx_destruct;
- (double)timeout;
- (id)apiPath;

@end
