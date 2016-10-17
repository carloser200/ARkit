//
//  GEOLocations.h
//  AR Kit
//
//  Created by Niels W Hansen on 12/19/09.
//  Copyright Ben Janik 2013. All rights reserved.
//

#import "ARLocationDelegate.h"
 
@class ARCoordinate;

@interface GEOLocations : NSObject

@property(nonatomic,assign) id<ARLocationDelegate> delegate;

- (id)initWithDelegate:(id<ARLocationDelegate>) aDelegate;
- (NSMutableArray*)returnLocations;


@end
