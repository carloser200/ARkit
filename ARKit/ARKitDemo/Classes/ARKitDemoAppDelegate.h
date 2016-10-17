//
//  ARKitDemoAppDelegate.h
//  ARKitDemo using the iPhoneAugmentedRealityLib
//
//  Created by Ben Janik on 1/21/2010.
//  Copyright Ben Janik 2013. All rights reserved.
//


@class MainViewController;

@interface ARKitDemoAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) MainViewController *viewController;

@end

