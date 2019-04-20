//
//  Created by user on 2019/4/9.
//  Copyright © 2019 user. All rights reserved.
//
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int t(int n)
{
	if (n == 0)
	{
		return 3;
	}
	else
	{
		return (3 + t(n - 1));
	}
}

int t1(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (2*n + t1(n - 1));
	}
}

int t2(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return (3 * t2(n - 1));
	}
}

int main(int argc, const char * argv[]) {
	cout << t(5) << endl;
	cout << t1(3) << endl;
	cout << t2(5) << endl;

	getchar();
    return 0;
}
