/*
         break语句(2)
*/
#include <iostream>
using namespace std;

int main()
{
    // Break 的使用时机(2)
    // 2. 出现在循环语句中
    for(int i=0; i < 10; i++)
    {
        if(i==5)   //如果需要在i=5的时候停止
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}