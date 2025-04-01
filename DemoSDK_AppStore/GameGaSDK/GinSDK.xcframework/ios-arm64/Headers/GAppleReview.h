//
//  GAppleReview.h
//  GinSDK
//
//  Created by Sơn Lê on 31/7/24.
//

#import <StoreKit/StoreKit.h>

@interface GAppleReview : NSObject {
    
}

+ (GAppleReview *) sharedInstance;
- (void) setPromptInfo:(NSDictionary *)info;
- (void) showReview;
- (void) showReviewPrompt:(UIViewController *)mainViewController;
- (void) writeAReview:(NSString *)appId;
@end
