//
//  test-25.cpp
//  git_DSAA_in_CPP
//
//  Created by user on 2019/4/10.
//  Copyright © 2019 user. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


//子集生成方法 Subset Generation
//对称 0 -  （n+1）/2
using namespace std;
//

void print_subset(int n,int s)
{
	printf("my test %d,%d\n",n,s);
	for(int i=0;i<n;i++)   // 最多个数为n
		if( s & ( 1<<i ) )  //用 s 来挑选    1<<i  ->  1 2 4  其实就是用s的二进制来挑选位置
			printf("%d ",i);  
	printf("\n");
	
}

vector<vector<int>> print_test(int n)  
{
	vector<vector<int>> result;
	for (int i = 0; i < (1<<n); i++)
	{
		vector<int> temp;
		for (int j = 0; j < n; j++)  
		{
			temp.push_back((i >> (n - j - 1)) % 2); //求 j 的二进制
		}
		//temp.push_back(i % 2);
		result.push_back(temp);
	}
	return result;
}


int main()
{
	int n;
	cin >> n;
	//printf("my : %d\n",(1<<n));
	for(int i=0;i<(1<<n);i++)  // 0 - 7   1<<n 是2的n次方
		print_subset(n,i); 
	//print_test(3);
	getchar();
	getchar();
	return 0;

}
