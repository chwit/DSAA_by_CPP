//
//  Created by user on 2019/4/10.
//  Copyright © 2019 user. All rights reserved.
//
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//next_permutation

//黑盒测试考查的是程序功能 而不是实际的代码 白盒测试考查的是程序代码，以便设计出能够在程序执行中全面覆盖程序的语句和执行路径的测试数据
//白盒：语句覆盖，分支覆盖，从句覆盖，执行路径覆盖

void outputRoots(const double & a, const double & b, const double & c)
{
	double d = b * b - 4 * a * c;
	if (d > 0)
	{
		double sqrtd = sqrt(d);
		cout << " There are two real roots " << (-b + sqrtd) / (2 * a) << " and" << (-b + sqrtd) / (2 * a) << endl;
	}
	else if (d == 0)
	{
		cout << " There is only one distinct root " << -b / (2 * a) << endl;
	}
	else
	{
		cout << " There roots are complex" << endl << " The real part is" << -b / (2 * a) << endl << "The imaginary part is"
			<< sqrt(-d) / (2 * a) << endl;
	}
}

int main()
{
	outputRoots(1, 2, 5);
	getchar();
	return 0;
}
