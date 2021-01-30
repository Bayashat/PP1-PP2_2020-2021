/*       值传递

##      所谓值传递，就是函数调用时实参将数值传入给形参
##      值传递时，如果形参发生改变，并不会影响实参 
*/
#include <iostream>
using namespace std;

//      1.先定义一个函数： 实现两个数字交换
void swap(int num1, int num2)       // 如果函数不需要返回值，声明的时候可以写 void 
{
    cout << "Before:" << endl;
    cout << "Num1= " << num1 << endl;
    cout << "Num2= " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After:" << endl;
    cout << "Num1= " << num1 << endl;
    cout << "Num2= " << num2 << endl;

    //return;   当不需要返回值时，可以不写 return 
}

int main()
{
    int a = 10;
    int b = 20;
    
    swap(a,b);

    return 0;
}
// 总结： 值传递时，形参是修饰不了实参的