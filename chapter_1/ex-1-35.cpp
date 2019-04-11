//
//  Created by user on 2019/4/10.
//  Copyright © 2019 user. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//next_permutation


//只有排序之后的数组才能只用next_permutation获得全排列
int count_my = 0;
//输出范围[start,end)内的全排列
template<typename T>
void permutations(T list[], int k , int m)
{
	//sort(list + k, list + m );
	int num = m - k;
	int count = 1;
	for (int i = 2; i <= num; i++) // 计算总数 用 next & prev共同输出全排列  也可以判断数组是否相同
		count *= i;
	do {
		count_my++;
		count--;
		copy(list + k,list + m , ostream_iterator<T>(cout," "));
		cout << endl;
	} while (next_permutation(list + k,  list + m ));
	while (count)
	{
		count_my++;
		count--;
		copy(list + k, list + m, ostream_iterator<T>(cout, " "));
		cout << endl;
		prev_permutation(list + k, list + m);
	}
}



int main()
{
	int arr[] = { 1, 3, 2, 4, 5 };
	permutations(arr, 0, 3);
	cout << count_my << endl;
	getchar();
	getchar();
	return 0;

}
