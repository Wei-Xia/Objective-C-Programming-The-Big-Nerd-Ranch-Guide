//
//  main.c
//  Challenge 9.3
//
//  Created by Wei on 7/6/15.
//  Copyright (c) 2015 OO. All rights reserved.
//
// An unsigned short only hold non-negative numbers. What is the largest number that an unsigned short can store?

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //same question but unsigned short instead
    
    unsigned short m;
    unsigned short n;

    for (m = 0; m < 1; m--) {
        continue;
    }

//    for (n=0; n>-1; n++) {
//        continue;
//    }
    
    printf("largest unsigned short is %d\n\n", m);
    
    return 0;
}

