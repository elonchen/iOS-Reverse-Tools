//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "AJPickerTextFieldDelegate.h"

@class AJPickerTextField, Arrow, NSArray, NSString, UIColor, UIFont, UILabel;

@interface AJPickerButton : UIButton <AJPickerTextFieldDelegate>
{
    _Bool _showArrow;
    id <AJPickerButtonDelegate> _privateDelegate;
    NSArray *_selectionArray;
    long long _selectedRow;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    long long _arrowDirection;
    long long _titleAlignment;
    AJPickerTextField *_pickerTextField;
    UILabel *_customTitleLabel;
    Arrow *_arrow;
}

@property(retain, nonatomic) Arrow *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) AJPickerTextField *pickerTextField; // @synthesize pickerTextField=_pickerTextField;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic, getter=isShowArrow) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSArray *selectionArray; // @synthesize selectionArray=_selectionArray;
@property(nonatomic) id <AJPickerButtonDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
- (void).cxx_destruct;
- (void)pickerTextField:(id)arg1 didSelectRow:(long long)arg2;
- (void)arrowTapGestureEvent:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)titleForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)initDefaultValue;
- (void)setupViews;
- (void)initViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 selectionArray:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

