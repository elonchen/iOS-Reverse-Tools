//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GroupMemberHeadModel : NSObject
{
    unsigned long long _headStyle;
    NSString *_headUrl;
    NSString *_name;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(nonatomic) unsigned long long headStyle; // @synthesize headStyle=_headStyle;
- (void).cxx_destruct;

@end
