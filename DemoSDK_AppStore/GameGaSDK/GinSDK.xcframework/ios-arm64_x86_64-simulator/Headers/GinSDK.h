//
//  GinSDK.h
//  GinSDK
//
//  Created by Nero-Macbook on 3/26/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LoginDelegate.h"
#import "IAPDataRequest.h"

#import "IdAppTracking.h"
#import "FacebookManager.h"
#import "FirebaseManager.h"
#import "GPayment.h"
#import "GTrackingManager.h"
#import "GAppleReview.h"
#import "WebTopupInfo.h"
#import "TopupDelegate.h"
@interface GinSDK : NSObject

+ (GTrackingManager *) GTracking;
+ (GinSDK *) sharedInstance;
+ (FirebaseManager *) Firebase;
+ (IdAppTracking *) ServerIdTracking;
+ (FacebookManager *) Facebook;
+ (GPayment *) GPayment;


- (void) initSdk:(void(^)(NSString *)) initStatus;
- (void)showSignInView:(UIViewController *)viewParent andResultDelegate:(id<LoginDelegate>) loginResultDelegate;
- (void) IDSignOut:(id<LogoutDelegate>) logoutDelegate;
//IAP
- (void) showIAP:(IAPDataRequest *) iapData andMainView:(UIViewController *) mainView andIAPDelegate:(id) iAPDelegate;\
//WebTopup
- (void) showTopup:(WebTopupInfo *) topupInfo andMainView:(UIViewController *) mainView andTopupDelegate:(id) topupDelegate;
//tracking
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
- (BOOL)applicationDelegate:(id)appDelegate andApplication:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)deleteAccount:(void (^)(NSDictionary<NSString *, id> *))deleteCallback;
- (void)deleteAccount:(void (^)(NSDictionary<NSString *, id> *))deleteCallback andWithDialog:(Boolean)withDialog;
- (Boolean) isRv;
+ (GAppleReview *) review;
@end
