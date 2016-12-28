//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class EMMemoryCache, NSString;

@interface EMMessagePool : NSObject <NSCacheDelegate>
{
    EMMemoryCache *_messageCache;
}

+ (id)handleMessagesFromDB:(id)arg1;
+ (void)markAllMessagesForChatter:(id)arg1 asRead:(_Bool)arg2;
+ (void)removeAllMessagesForChatter:(id)arg1;
+ (void)clearPool;
+ (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)allCachedMessages;
+ (void)removeMessageWithMessageId:(id)arg1;
+ (id)messageWithMessageId:(id)arg1;
+ (void)addMessageToPool:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) EMMemoryCache *messageCache; // @synthesize messageCache=_messageCache;
- (void).cxx_destruct;
- (id)handleMessagesFromDB:(id)arg1;
- (void)markAllMessagesForChatter:(id)arg1 asRead:(_Bool)arg2;
- (void)removeAllMessagesForChatter:(id)arg1;
- (void)clearPool;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)allCachedMessages;
- (id)messageWithMessageId:(id)arg1;
- (void)removeMessageWithMessageId:(id)arg1;
- (void)addMessageToPool:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
