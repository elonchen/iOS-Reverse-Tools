//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIButton, UILabel;

@interface MapLocationBarView : UIImageView
{
    UILabel *_titleLab;
    UILabel *_contentLab;
    UIButton *_detailBtn;
}

@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
