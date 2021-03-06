#import <Cordova/CDV.h>
#import "AppDelegate.h"

@interface CDVParsePlugin: CDVPlugin

@property (nonatomic, copy) NSString *callback;
@property (nonatomic, copy) NSDictionary *launchNotification;

- (void)handleNotification:(NSDictionary *)userInfo atLaunch:(BOOL)atLaunch;

- (void)register:(CDVInvokedUrlCommand *)command;
- (void)unregister:(CDVInvokedUrlCommand *)command;
- (void)clearBadge:(CDVInvokedUrlCommand *)command;
- (void)getInstallationId:(CDVInvokedUrlCommand *)command;
- (void)getInstallationObjectId:(CDVInvokedUrlCommand *)command;
- (void)getSubscriptions:(CDVInvokedUrlCommand *)command;
- (void)subscribe:(CDVInvokedUrlCommand *)command;
- (void)unsubscribe:(CDVInvokedUrlCommand *)command;

@end

@interface AppDelegate(CDVParsePlugin)
@end
