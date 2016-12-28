//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MsgBaseViewController.h"

#import "DXChatBarMoreViewDelegate.h"
#import "DXMessageToolBarDelegate.h"
#import "LocationMapViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class DXMessageToolBar, MessageReadManager, NSString, UIImagePickerController;

@interface ChatBaseViewController : MsgBaseViewController <DXMessageToolBarDelegate, DXChatBarMoreViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, LocationMapViewDelegate>
{
    _Bool _isInvisible;
    DXMessageToolBar *_chatToolBar;
    UIImagePickerController *_imagePicker;
    MessageReadManager *_messageReadManager;
}

@property(retain, nonatomic) MessageReadManager *messageReadManager; // @synthesize messageReadManager=_messageReadManager;
@property(nonatomic) _Bool isInvisible; // @synthesize isInvisible=_isInvisible;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) DXMessageToolBar *chatToolBar; // @synthesize chatToolBar=_chatToolBar;
- (void).cxx_destruct;
- (void)toResumeViewCtrl:(id)arg1 partimeJobBean:(id)arg2 resumeType:(unsigned long long)arg3;
- (id)buildPartimeJobBean:(id)arg1;
- (id)buildJobBean:(id)arg1 userid:(id)arg2;
- (void)getUserCurrentStatus:(id)arg1 groupId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeChatter;
- (void)sendHasReadResponseForMessages:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)sendVideoMessage:(id)arg1;
- (void)sendAudioMessage:(id)arg1;
- (void)sendImageMessage:(id)arg1;
- (void)sendTextMessage:(id)arg1;
- (void)sendLocationMessage:(double)arg1 longitude:(double)arg2 andAddress:(id)arg3;
- (void)applicationDidEnterBackground;
- (id)formatMessage:(id)arg1;
- (id)formatMessages:(id)arg1;
- (void)loadMoreMessages;
- (void)stopAudioPlayingWithChangeCategory:(_Bool)arg1;
- (_Bool)canRecord;
- (id)convert2Mp4:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didFinishRecoingVoiceAction:(id)arg1;
- (void)didCancelRecordingVoiceAction:(id)arg1;
- (void)didStartRecordingVoiceAction:(id)arg1;
- (void)didSendText:(id)arg1;
- (void)didChangeFrameToHeight:(double)arg1;
- (void)inputTextViewWillBeginEditing:(id)arg1;
- (void)sendLocationLatitude:(double)arg1 longitude:(double)arg2 andAddress:(id)arg3;
- (void)moreViewVideoCallAction:(id)arg1;
- (void)moreViewAudioCallAction:(id)arg1;
- (void)moreViewVideoAction:(id)arg1;
- (void)moreViewLocationAction:(id)arg1;
- (void)moreViewTakePicAction:(id)arg1;
- (void)moreViewPhotoAction:(id)arg1;
- (void)didInterruptionRecordAudio;
- (void)didReceiveCmdMessage:(id)arg1;
- (void)didFetchingMessageAttachments:(id)arg1 progress:(float)arg2;
- (void)didMessageAttachmentsStatusChanged:(id)arg1 error:(id)arg2;
- (void)reloadTableViewDataWithMessage:(id)arg1;
- (void)didSendMessage:(id)arg1 error:(id)arg2;
- (void)chatImageCellBubblePressed:(id)arg1;
- (void)playVideoWithVideoPath:(id)arg1;
- (void)chatVideoCellPressed:(id)arg1;
- (void)chatLocationCellBubblePressed:(id)arg1;
- (void)chatAudioCellBubblePressed:(id)arg1;
- (void)chatTextCellUrlPressed:(id)arg1;
- (void)headPressHandler:(id)arg1;
- (void)routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)reloadData;
- (void)keyBoardHidden;
- (long long)messageType;
- (_Bool)shouldAckMessage:(id)arg1 read:(_Bool)arg2;
- (void)downloadMessageAttachments:(id)arg1;
- (void)loadMoreMessagesFrom:(long long)arg1 count:(long long)arg2 append:(_Bool)arg3;
- (_Bool)isChatGroup;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
