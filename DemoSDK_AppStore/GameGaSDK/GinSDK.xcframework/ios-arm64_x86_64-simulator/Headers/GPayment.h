//
//  GPayment.h
//  GinSDK
//
//  Created by Nero-Macbook on 9/7/23.
//

#import <UIKit/UIKit.h>
#import "IAPDataRequest.h"
#import "IAPDelegate.h"
#import "WebTopupInfo.h"
@interface GPayment : NSObject {
    
}

@property (nonatomic, strong) id<IAPDelegate> iAPDelegate;
@property (nonatomic, strong) IAPDataRequest *iAPDataRequest;
@property (nonatomic, strong) WebTopupInfo *webTopupInfo;
@property (nonatomic, assign) BOOL isIAP;

+ (GPayment *) sharedInstance;
- (void) showIAP:(IAPDataRequest *) iapData;
- (void) inAppStartPurchase;
- (void) verifyPayConfirm:(id) payInfo;
- (void) terminateIAP;
- (void) paymenCancel;
- (void) showTopup:(WebTopupInfo *) topupInfo;
- (NSString *)generateQueryStringWithGameId:(NSString *)gameId
                                characterId:(NSString *)characterId
                              characterName:(NSString *)characterName
                                   serverId:(NSString *)serverId
                                   clientId:(NSString *)clientId
                                 customerId:(NSString *)customerId
                                   userName:(NSString *)userName
                                  secretKey:(NSString *)secretKey
                                sdkLanguage:(NSString *)sdkLanguage;
@end
