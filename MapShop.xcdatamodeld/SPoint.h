//
//  SPoint.h
//  MapShop
//
//  Created by Mike Bevz on 22/01/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#import "AbstractModel.h"
#import "Shop.h"


@interface SPoint : AbstractModel  
{
}

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * comment;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSNumber * altitude;
@property (nonatomic, retain) NSNumber * shop_id;
@property (nonatomic, retain) NSNumber * sync;
@property (nonatomic, retain) NSNumber * upd;
@property (nonatomic, retain) NSNumber * del;
@property (nonatomic, retain) Shop * shop;

@end



