//
//  FreckleConfiguration.h
//  FreckleSDK
//
//  Created by Cody-James LeBlanc on 2015-06-23.
//  Copyright (c) 2015 Freckle IoT. All rights reserved.
//

#import <Foundation/Foundation.h>

//typedef enum : NSUInteger {
//    FreckleOptInStatusUnset = 0,
//    FreckleOptInStatusAllowed,
//    FreckleOptInStatusDenied,
//} FreckleOptInStatus;

@class FreckleConfiguration;
@protocol FreckleConfigurationDelegate <NSObject>
-(void)configurationHasChanged:(FreckleConfiguration*)configuration;
@end

@interface FreckleConfiguration : NSObject

// Whether the user is opted into location awareness inside the SDK
//
// Default: FITOptInStatusUnset
@property (nonatomic        ) NSNumber *locationOptIn;

// Whether the user is opted into third-party notifications
//
// Default: FITOptInStatusUnset
@property (nonatomic        ) NSNumber *notificationOptIn;

// Should the SDK ask to display third-party notifications in an alert dialog.
// This will pop-up after the location dialog has been shown and acted upon.
// The notificationOptedIn property reflects the decision made by the user.
//
// Default: YES
@property (nonatomic        ) BOOL shouldShowNotificationDialog;

// Should the SDK ask for 'Always' location on start-up or an alert dialog if the application
// already has 'WhenInUse' permission. If set to NO app is responsible for asking the user.
//
// Default: YES
@property (nonatomic        ) BOOL shouldShowLocationDialog;

// Any details you want to include about the device/user to help with the
// notifications/targeting/integration. This must be serializable to JSON using
// NSJSONSerialization and NSJSONSerialization's +isValidJSONObject:(id)obj must return true.
//
// Default:NO
//@property (nonatomic        ) BOOL shouldShowMotionTrackingDialog;

//Should the SDK ask for Motion Tracking on start-up
//
// Default is empty dictionary
@property (nonatomic, strong) NSDictionary *integrationData;

// Check if it is First time running
-(BOOL) isFirstRun;

// Store and retrieve expiry for SDK configuration
@property (nonatomic,strong) NSDate *configExpiry;
// A delegate to listen for changes to the configuration object
@property (nonatomic, weak) id<FreckleConfigurationDelegate> delegate;
@property (nonatomic        ) BOOL devMode;
@end
