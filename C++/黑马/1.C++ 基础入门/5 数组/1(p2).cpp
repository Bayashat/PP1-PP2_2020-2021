/*
**练习案例2：**数组元素逆置

**案例描述：**请声明一个5个元素的数组，并且将元素逆置.

(如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
*/
#include <iostream>
using namespace std;

int main()
{
    //实现数组运算逆置

    // 1.创建数组
    int arr[5] = {1,3,2,5,4};
    cout << "Before: " << endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }

    // 2.实现逆置
    // 2.1记录起始下标位置
    // 2.2记录结束下标位置
    // 2.3起始下标与结束下标的元素互换
    // 2.4起始位置++  结束位置--
    // 2.5循环执行2.1的操作，直到起始位置 >= 结束位置
    int start = 0;  //起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1;  //结束下标

    while(start<end)
    {
        //实现元素互换
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //下标更新
        start++;
        end--;
    }

    // 3.打印逆置
    cout << " After: " << endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}