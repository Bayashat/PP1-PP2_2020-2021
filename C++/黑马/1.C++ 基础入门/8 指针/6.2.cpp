#include <iostream>

using namespace  std;

int main() 
{


    int a[] = {1,2 ,3 };

    cout << a << endl;  // 数组名本身就是首地址
    cout << a + 2 << endl;
    cout << *a << endl; // 解首地址以获得首个元素
    cout << *(a + 2) << endl;//pointer

    int n = 8;
    cout << n << endl;
    cout << &n << endl;//reference    // 获得地址

    return 0;
}