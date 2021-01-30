//   Next_permutation-1  基本构造
//    Next_permutation(first,last);
#include <iostream>
#include <algorithm>
using namespace  std;

int main() 
{

    int a[] = {1, 2, 3};

    next_permutation(a, a + 3); // 求出它的下一个排列， 3!=6. 所以是有6个。
    next_permutation(a, a + 3);
    next_permutation(a, a + 3);
    next_permutation(a, a + 3);
    next_permutation(a, a + 3);

    for(int i = 0; i < 3; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}