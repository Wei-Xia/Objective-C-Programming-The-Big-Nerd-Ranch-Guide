//
//  main.c
//  Challenge 9.2
//
//  Created by Wei on 7/6/15.
//  Copyright (c) 2015 OO. All rights reserved.
//
// On a Mac, a short is 2-byte integer, and one bit is used to hold the sign. What is the smallest number that a short can store?
// What is the largest?


#include <stdio.h>
#include <limits.h> //for Way Three

int main(int argc, const char * argv[])

{    
    //Way One
    
    short x;
    short y;
        
    for (x = 0; x > -1; x++) {
        continue;
    }
    printf("Smallest short is %d. \n",x);
        
    for (y = 0; y < 1; y--) {
        continue;
    }
    printf("Largest short is %d. \n\n",y);
    
    //Way Two
    
    short smallestNumber;
    short largestNumber;
    
    for (smallestNumber = 0; smallestNumber >= 0; smallestNumber++){
        continue;
    }
    printf("The smallest number a short int can store is %d.\n", smallestNumber);

    for (largestNumber = 0; largestNumber <= 0; largestNumber--){
        continue;
    }
    printf("The largest number a short int can store is %d.\n\n", largestNumber);
    
    
    //Way Three
    
    printf("Minimum value of a signed short is %d\n", SHRT_MIN);
    printf("Maximum value of a signed short is %d\n", SHRT_MAX);
    
    return 0;
}

