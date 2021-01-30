// 1.算术运算符-加减乘除运算
// 算数运算符用来处理四则运算
#include <iostream>
using namespace std;

int main()
{
    //加减乘除
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;   //因为这是整型，所以结果不会是有小数

    //两个小数可以相除：
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d1 / d2 << endl;

    return 0;
}