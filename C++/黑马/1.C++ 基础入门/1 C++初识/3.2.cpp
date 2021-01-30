//常量 （常量是不可修改的）
// 作用：用于记录程序中不可更改的数据
#include <iostream>
using namespace std;
    /*常量的定义方式
    第2种：const----修饰的变量
    语法是：const 数据类型 常量名 = 常量值
    
    通常1在变量定义前加关键字const，修饰该变量为常量，不可修改
    */
int main()
{
    const int month = 12;

    cout << "one year has " << month << " months" << endl;


    return 0;
}