/*
         break语句(1)

**作用: 用于跳出==选择结构==或者==循环结构==

break使用的时机：

* 出现在switch条件语句中，作用是终止case并跳出switch
* 出现在循环语句中，作用是跳出当前的循环语句
* 出现在嵌套循环中，跳出最近的内层循环语句
*/
#include <iostream>
using namespace std;

int main()
{
    // Break 的使用时机(1)

    // 1. 出现在switch 语句中
    cout << "please select" << endl;
    cout << "1.easy" << endl;
    cout << "2.norm" << endl;
    cout << "3.difficult" << endl;

    int select =0;   // 创建选择结果的1变量

    cin >> select;   // 等待用户输入

    switch(select)
    {
        case 1:
        cout << "you choose easy" <<endl;
        break;  // 退出switch 语句
        case 2:
        cout << "you choose norm" <<endl;
        break;
        case 3:
        cout << "you choose difficult" <<endl;
        break;
        default:
        break;
    }
    return 0;
}