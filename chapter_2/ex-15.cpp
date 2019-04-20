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

template < typename T >
void insertSort(T arr[], int n)
{
	//从1开始对数组进行插入排序
	for (int i = 1; i < n; i++)
	{
		T temp = arr[i];
		int j;
		for (j = i - 1; j >= 0 && temp < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;
		copy(arr, arr + n, ostream_iterator<T>(cout, "  "));
		cout << endl;
	}
}

int main(int argc, const char * argv[]) {
    // insert code here...
	int arr[] = { 10, 4, 7, 3, 6, 38, 44, 40, 20 };
	//copy(arr, arr + 9, ostream_iterator<int>(cout, " --- "));
	//cout << endl;
	insertSort(arr, 9);
	cout << endl << endl << endl;

	//int arr1[] = { 10, 8, 7, 3, 2, 38, 44, 40, 20 };
	//copy(arr1, arr1 + 9, ostream_iterator<int>(cout, " ---"));
	//cout << endl;
	//bubbleSort_dep(arr1, 9);

	getchar();
    return 0;
}
