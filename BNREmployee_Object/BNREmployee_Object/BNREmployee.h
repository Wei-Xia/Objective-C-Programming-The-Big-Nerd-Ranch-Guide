//
//  BNREmployee.h
//  BNREmployee_Object
//
//  Created by Wei on 7/17/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRPerson.h"
@class BNRAsset;

@interface BNREmployee : BNRPerson
{
    NSMutableArray *_assets;
}

@property (nonatomic) unsigned int employeeID;
@property (nonatomic) unsigned int officeAlarmCode;
@property (nonatomic) NSDate *hireDate;
@property (nonatomic, copy) NSArray *assets;

-(double)yearOfEmployment;
-(void)addAssets:(BNRAsset *)a;
-(unsigned int)valueOfAssets;


@end
