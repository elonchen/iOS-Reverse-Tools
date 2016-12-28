//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

@class BaseTextField, UIButton, UILabel;

@interface ReChargeViewController : BaseNavViewController
{
    long long _selectIndex;
    UILabel *_priceTitleLab;
    BaseTextField *_priceTextField;
    UILabel *_payMethodLab;
    UIButton *_payBtn;
}

@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UILabel *payMethodLab; // @synthesize payMethodLab=_payMethodLab;
@property(retain, nonatomic) BaseTextField *priceTextField; // @synthesize priceTextField=_priceTextField;
@property(retain, nonatomic) UILabel *priceTitleLab; // @synthesize priceTitleLab=_priceTitleLab;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)toPayVC:(id)arg1;
- (void)sureToPayHandler:(id)arg1;
- (void)requestAlipayRecharge:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

@end
