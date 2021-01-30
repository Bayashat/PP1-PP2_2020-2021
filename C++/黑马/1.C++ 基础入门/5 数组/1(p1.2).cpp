#include <iostream>
using namespace std;

int main()
{

    // 第二种解题思路
    int arr[5] = {250,500,450,700,800};
    //int max=0;
    for(int i = 0;i<5;i++)
    {
        if(arr[i]>arr[i+1])
        {
            arr[i+1] = arr[i];
        }
    }
    cout << arr[4] << endl;
    return 0;
}