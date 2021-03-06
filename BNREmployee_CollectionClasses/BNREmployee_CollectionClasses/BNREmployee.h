//
//  BNREmployee.h
//  BNREmployee_CollectionClasses
//
//  Created by Wei on 7/21/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRPerson.h"
@class BNRAsset;

@interface BNREmployee : BNRPerson

@property (nonatomic) unsigned int employeeID;
@property (nonatomic) NSDate *hireDate;
@property (nonatomic, copy) NSSet *assets;

-(void)addAssets:(BNRAsset *)a;
-(unsigned int)valueOfAssets;


@end
