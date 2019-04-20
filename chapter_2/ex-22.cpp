//
//  main.cpp
//  git_DSAA_in_CPP
//
//  Created by user on 2019/4/9.
//  Copyright © 2019 user. All rights reserved.
//
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

//插入排序 
//二维数组做形参 的三种方式    int (*parr)[4]或者 int arr[][4]  //     int arr[][4]={0,1,2,3,4,5,6,7,8,9,10,11};  
//转成一维数组

template < typename T >
void squareMatrixMultiply(T *a, T *b, T *c,int m,int n,int p)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			int result = 0;
			for (int k = 0; k < n; k++)
			{
				result += a[i * n + k] * b[k * p + j];
			}
			(c[i * p + j] = result);
		}
	}
}

int main(int argc, const char * argv[]) {
	int a[2][3] = { { 1,2,3 }, { 2,2,2 } };
	int b[3][4] = { { 1,1,1,1}, { 2, 3, 4,5},{ 0, 1, 0, 1} };
	int c[2][4];
	int *ap = (int *)a;
	int *bp = (int *)b;
	int *cp = (int *)c;
	squareMatrixMultiply<int>(ap, bp, cp, 2, 3, 4);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//cout << cp[i * 4 + j] << " ";
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	getchar();
    return 0;
}
