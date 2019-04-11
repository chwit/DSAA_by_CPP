
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//用递归函数生成全排列
template<typename T>
void perm(vector<T> num, int time)
{
    if (time == num.size() - 1) {
        copy(num.begin(), num.end(), ostream_iterator<T>(cout,""));
        cout << endl;
    }
    for (int i = time; i < num.size(); i++) {
        swap(num[time], num[i]);
        perm(num, time+1);
        swap(num[time], num[i]);
    }
}
//test-main
int main_ex_1_32(int argc, const char * argv[]) {
    //int num[3] = { 0 , 1, 2};
    vector<int> num = { 0 , 1 , 2, 4, 5};
    
    perm(num, 0);
    vector<char> str ={ 'a','b','c'};
    perm(str, 0);
    
    return 0;
}
