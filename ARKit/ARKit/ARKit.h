//
//  ARKit.h
//  AR Kit
//
//  Created by Ben Janik on 11/20/11.
//  Copyright Ben Janik 2013. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "ARGeoCoordinate.h"
#import "ARLocationDelegate.h"
#import "ARViewProtocol.h"
#import "GEOLocations.h"
#import "AugmentedRealityController.h"


@interface ARKit : NSObject

+(BOOL)deviceSupportsAR;

@end
