//
//  TopupPayment.h
//  GinSDK
//
//  Created by itc on 23/3/25.
//
#import <UIKit/UIKit.h>
#import "TopupDelegate.h"
@interface WebTopupInfo : NSObject
{
    
}
@property (nonatomic, strong) NSString *urlTopup;
@property (nonatomic, strong) NSString *serverId;
@property (nonatomic, strong) NSString *characterId;
@property (nonatomic, strong) NSString *characterName;
@property (nonatomic, strong) NSString *tokenValue;
@property (nonatomic, strong) UIViewController *mainViewController;
@property (nonatomic, strong) id<TopupDelegate> delegate;
+ (WebTopupInfo *)sharedInstance;
@end
