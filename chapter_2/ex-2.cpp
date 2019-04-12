//
//  main.cpp
//  git_DSAA_in_CPP
//
//  Created by chwit on 2019/4/9.
//  Copyright © 2019 chwit. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
	double y[3];
	int matrix[10][100];
	bool a[2][3][4];
	long b[3][3][3][3];   //long 4  32位机
	cout << sizeof(y) << "  , " << sizeof(matrix) << "  , " << sizeof(a)<<  "  , " << sizeof(b) << endl;
	getchar();
    return 0;
}
