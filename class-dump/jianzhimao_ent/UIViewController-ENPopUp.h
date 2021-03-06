//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (ENPopUp)
- (id)topView;
- (void)performDismissAnimationInSourceView:(id)arg1 withBlurView:(id)arg2 popupView:(id)arg3 overlayView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)performAppearAnimationWithBlurView:(id)arg1 popupView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CATransform3D)transform3d;
- (void)setAnimationStateFrom:(id)arg1;
- (void)presentPopUpView:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIViewController *en_popupViewController;
- (void)dismissPopUpViewControllerWithcompletion:(CDUnknownBlockType)arg1;
- (void)dismissPopUpViewController;
- (void)presentPopUpViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPopUpViewController:(id)arg1;
@end

