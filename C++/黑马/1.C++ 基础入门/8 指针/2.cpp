/*       8.2 指针所占内存空间
提问：指针也是种数据类型，那么这种数据类型占用多少内存空间？
*/
#include <iostream>
using namespace std;

int main() 
{
	int a = 10;

	int * p = &a; //指针指向数据a的地址

	cout << *p << endl; //* 解引用
	cout << sizeof(p) << endl;  // 也可以写 "int *"  这是 整型 指针所占内存空间
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

	return 0;
}
//  总结：所有指针类型在32位操作系统下是4个字节， 在64为操作系统下是8个字节。