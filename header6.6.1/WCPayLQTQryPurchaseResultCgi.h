//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class NSString;
@protocol WCPayLQTQryPurchaaseResultCgiDelegate;

@interface WCPayLQTQryPurchaseResultCgi : WCPayBaseCgi
{
    unsigned int _fee;
    NSString *_tradeNo;
    NSString *_transId;
    id <WCPayLQTQryPurchaaseResultCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayLQTQryPurchaaseResultCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) unsigned int fee; // @synthesize fee=_fee;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

