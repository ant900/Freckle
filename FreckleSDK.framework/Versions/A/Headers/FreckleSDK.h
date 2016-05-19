//
//  FreckleSDK
//
//  Copyright (c) 2015 Freckle IoT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <AdSupport/AdSupport.h>
#import "FreckleConfiguration.h"

@interface FreckleSDK : NSObject

/// Start the Freckle SDK with the required API Token supplied by Freckle IoT with
/// the default configuration. A singleton instance with a self managed core location manager.
+ (void)startWithToken:(NSString*)token;

/// Start the Freckle SDK with the required API Token supplied by Freckle IoT with
/// a customized configuration. A singleton instance with a self managed core location manager.
+ (void)startWithToken:(NSString*)token andConfiguration:(FreckleConfiguration*)configuration;

/// Configuration of the SDK, can be used to update the SDK's settings.
+ (FreckleConfiguration*)configuration;

/// Status method to see if the Freckle SDK is authorized and ready to look for beacons
/// this can change whether the user enables / diables location and bluetooth.
+ (BOOL)isAuthorized;

/// Handle local notifications sent while the app is not frontmost. The notification can be
/// found in the application:didFinishLaunchingWithOptions: method, where the application delegate
/// can obtain the UILocalNotification object from the passed-in options dictionary by using the
/// UIApplicationLaunchOptionsLocalNotificationKey key
+ (void)receivedNotification:(UILocalNotification*)notification;

/// Get the version string from the Freckle SDK
+ (NSString*)version;

+(void) invalidateAllTimers;

+(void) resumeAllTimers;

@end
