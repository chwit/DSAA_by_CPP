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

//冒泡排序
//从前往后  大的往后冒
void bubbleSort(int arr[], int len)
{
	for (int i = len; i > 1; i--)
	{
		for (int j = 0; j < i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		copy(arr, arr + len, ostream_iterator<int>(cout, "  "));
		cout << endl;
	}
}
//从后往前 小的往前冒
void bubbleSort_dep(int arr[], int len)
{
	//cout << arr[len - 1] << endl;
	for (int i = 0; i < len; i++)
	{
		for (int j = len - 1; j > i; j--)
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		copy(arr, arr + len, ostream_iterator<int>(cout, "  "));
		cout << endl;
	}
}

int main(int argc, const char * argv[]) {
    // insert code here...
	int arr[] = { 10, 4, 7, 3, 6, 38, 44, 40, 20 };
	copy(arr, arr + 9, ostream_iterator<int>(cout, " --- "));
	cout << endl;
	bubbleSort(arr, 9);
	cout << endl << endl << endl;

	int arr1[] = { 10, 8, 7, 3, 2, 38, 44, 40, 20 };
	copy(arr1, arr1 + 9, ostream_iterator<int>(cout, " ---"));
	cout << endl;
	bubbleSort_dep(arr1, 9);

	getchar();
    return 0;
}
