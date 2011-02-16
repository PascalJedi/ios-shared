//
//  CLLocation+SDExtensions.h
//  walmart
//
//  Created by brandon on 2/16/11.
//  Copyright 2011 Set Direction. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>


@interface CLLocation(SDExtensions)

+ (CLLocation *)locationWithCoordinates:(CLLocationCoordinate2D)coordinates;

@end
