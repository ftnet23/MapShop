// 
//  cities.m
//  MapShop
//
//  Created by Mike Bevz on 22/01/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "City.h"

//#import "Area.h"
#import "Region.h"

@implementation City 

@dynamic id;
@dynamic name;
@dynamic region;
//@dynamic areas;

#pragma mark RKObjectMappable methods

+ (NSDictionary*)elementToPropertyMappings {
	return [NSDictionary dictionaryWithKeysAndObjects:
			@"id", @"id",
			@"name", @"name",
			nil];
}

+ (NSString*)primaryKeyProperty {
	return @"id";
}

+ (NSDictionary*)elementToRelationshipMappings {
	return [NSDictionary dictionaryWithKeysAndObjects:
			@"region", @"region",
			nil];
}

@end