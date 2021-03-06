//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface FacialView : UIView
{
    NSArray *_faces;
    id <FacialViewDelegate> _delegate;
}

@property(readonly, nonatomic) NSArray *faces; // @synthesize faces=_faces;
@property(retain, nonatomic) id <FacialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendAction:(id)arg1;
- (void)selected:(id)arg1;
- (void)loadFacialView:(int)arg1 size:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

