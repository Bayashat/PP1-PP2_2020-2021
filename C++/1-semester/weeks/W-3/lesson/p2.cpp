// 例题2  在用户输入的数字中要找到最大的
#include <iostream>
using namespace std;

int main()
{

    int a[10];    

    for(int i = 0; i < 10; ++i)
    {
        cin >> a[i];
    }

    int max = a[0];

    for(int i = 1; i < 10; ++i){
        if(max < a[i]){
            max = a[i];
        }
    }

    cout << max << endl;

    return 0;
}