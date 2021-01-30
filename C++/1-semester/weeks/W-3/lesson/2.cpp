// 输出数组
#include <iostream>

using namespace std;

int main(){

    char a[4];

    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'c';
    a[3] = 'd';

    cout << a[0] << a[1] << a[2] << a[3] << endl;   //第一种输出方式

    cout << a << endl;      //第二种输出方式

    return 0;
}