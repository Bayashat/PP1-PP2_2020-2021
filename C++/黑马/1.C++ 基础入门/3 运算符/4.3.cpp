// 4.逻辑运算符-3. 或(||)
//只要其中一个是真，则真，双假的话。则假
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int b=10;
    cout << (a||b) << endl;

    a=0;
    b=10;
    cout << (a||b) << endl;

    a=0;
    b=0;
    cout << (a||b) << endl;

    return 0;
}  //同假为假，其余为真。
