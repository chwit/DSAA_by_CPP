//
//  main.cpp
//  git_DSAA_in_CPP
//
//  Created by user on 2019/4/9.
//  Copyright © 2019 user. All rights reserved.
//

#include <iostream>
#include <iterator>
using namespace std;

//选择排序 选出做大的放在最后
void selectSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int max_index = 0;
		for (int j = 1; j < len - i; j++)	 //找出最大的数的位置
		{
			if (arr[j] > arr[max_index])
				max_index = j;
		}
		if (max_index != len - i - 1)
		{
			int temp = arr[max_index];
			arr[max_index] = arr[len - i - 1];
			arr[len - i - 1] = temp;
		}
		copy(arr, arr + len, ostream_iterator<int>(cout, "  "));
		cout << endl;
	}
}
void selectSort_dep(int arr[], int len)
{
	//for (int i = 0; i < len - 1; i++) //我最常写的排序 选择排序 选择最小的放在最前面，交换移动的次数其实是有冗余的
	//{
	//	for (int j = i + 1; j < len; j++)
	//	{
	//		if (arr[j] < arr[i])
	//		{
	//			int temp = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = temp;
	//		}
	//	}
	//	copy(arr, arr + 9, ostream_iterator<int>(cout, "  "));
	//	cout << endl;
	//}

	for (int i = 0; i < len - 1; i++)
	{
		int min_index = i; //只要找到最小值 再进行交换就行
		for (int j = i + 1; j < len; j++) 
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
		copy(arr, arr + len, ostream_iterator<int>(cout, "  "));
		cout << endl;
	}
}

int main(int argc, const char * argv[]) {
    // insert code here...
	int arr[] = { 10, 4, 7, 3, 6, 38, 44, 40, 20 };
	copy(arr, arr + 9, ostream_iterator<int>(cout, " --- "));
	cout << endl;
	selectSort(arr, 9);
	cout << endl << endl << endl;

	int arr1[] = { 10, 8, 7, 3, 2, 38, 44, 40, 20 };
	copy(arr1, arr1 + 9, ostream_iterator<int>(cout, " ---"));
	cout << endl;
	selectSort_dep(arr1, 9);

	getchar();
    return 0;
}
