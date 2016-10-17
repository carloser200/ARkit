//
//  ARViewProtocol.h
//  AR Kit
//
//  Created by Ben Janik on 12/31/11.
//  Copyright Ben Janik 2013. All rights reserved.
//

@class ARGeoCoordinate;

@protocol ARMarkerDelegate <NSObject>
-(void) didTapMarker:(ARGeoCoordinate *) coordinate;
@end

@protocol ARDelegate <NSObject>

-(void) didUpdateHeading:(CLHeading *)newHeading;
-(void) didUpdateLocation:(CLLocation *)newLocation;
-(void) didUpdateOrientation:(UIDeviceOrientation) orientation;

@end
