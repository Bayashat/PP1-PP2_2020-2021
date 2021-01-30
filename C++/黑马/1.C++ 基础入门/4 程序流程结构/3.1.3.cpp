/*
         break语句(3)
*/
#include <iostream>
using namespace std;

int main()
{
    // Break 的使用时机(3)


    // 3. 出现在嵌套循环语句中
    for(int i = 0 ; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(j==5)
            {
                break;  // 退出内层循环
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}