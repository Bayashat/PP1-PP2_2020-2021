//   Next_permutation-2  使用 while 遍历：
#include <iostream>
#include <algorithm>

using namespace  std;


int main() 
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int len = sizeof(a) / sizeof(int);   // 这样求出数组长度: 40bit/4 = 10;

    // 1. while遍历：
    while(next_permutation(a,a+len))
    {
        for(int i = 0; i < len; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    // 2. do while 遍历：
    do{
        for(int i = 0; i < len; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a, a + len));
    
    return 0;
}