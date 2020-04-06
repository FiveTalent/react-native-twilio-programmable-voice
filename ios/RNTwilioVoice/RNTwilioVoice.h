//
//  TwilioVoice.h
//  TwilioVoice
//

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RNTwilioVoice : RCTEventEmitter <RCTBridgeModule>
+ (RNTwilioVoice *) sharedInstance;
- (void) configureCallKit;
- (void) initPushRegistry;
@end
