//常量 （常量是不可修改的）
// 作用：用于记录程序中不可更改的数据
#include <iostream> 
using namespace std;
    /* 常量的定义方式
    第1种：#define ----宏常量
    语法是：#define 常量名 常量值
    
    通常在文件上方定义，表示一个常量
    */
#define Day 7

int main()
{
    cout << "one week has: " << Day << " day" << endl;
return 0;
}