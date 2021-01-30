//  另一种将数组倒序的方法：
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int len = sizeof(a)/sizeof(int);  // 5
    for(int i=0;i<len;i++)
    {
        cout << a[len-1-i] << " ";
    }
}
