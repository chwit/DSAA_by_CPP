//
//  test-23.cpp
//  git_DSAA_in_CPP
//
//  Created by user on 2019/4/9.
//  Copyright © 2019 user. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//test-23
//GCD Greatest Common Divisor 辗转相除法
//  gcd(x,y)  = ( y == 0 ?  = x :  gcd(y,x%y) )

int gcd(int x,int y)
{
    return (y == 0 ? x : gcd(y, x%y));
}

//test-24
bool test_24(int arr[], int x, int len, int num)
{
    if (num == len - 1) {
        return arr[num] == x;
    }
    return (arr[num] == x) || test_24(arr,x,len,num+1);
}

int main_test_23()
{
    cout << gcd(20, 52) << endl;
    int arr[10] = { 1,2,3,4,5,6,7,8,9};
    cout << test_24(arr, 0, 9, 0) << endl;
    return 0;
}


