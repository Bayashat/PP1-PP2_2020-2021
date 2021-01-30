/*   1. 二维数组定义方式
    二维数组定义的四种方式：

1.  数据类型  数组名[ 行数 ][ 列数 ]; 
2. 数据类型  数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
3. 数据类型  数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
4.  数据类型  数组名[  ][ 列数 ] = { 数据1，数据2，数据3，数据4};

               0          1          2
            ————————————————————————————————----
         0 |arr[0][0] | arr[0][1] | arr[0][2]  |
         1 |arr[1][0] | arr[1][1] | arr[1][2]  |
            ————————————————————————————————----
*/
#include <iostream>
using namespace std;

int main()
{

    //第一种：

    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    cout << arr[0][0] << endl;
    cout << arr[0][1] << endl;
    cout << arr[0][2] << endl;
    cout << arr[1][0] << endl;
    cout << arr[1][1] << endl;
    cout << arr[1][2] << endl;

    // 外层循环打印行数，内层循环打印列数
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    // 第二种：
    int arr2[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


    // 第三种：
    int arr3[2][3] = {1,2,3,4,5,6};

    // 第四种：
    int arr4[][3] = {1,2,3,4,5,6};


    return 0;
}
//  >> 建议：以上4种定义方式，利用第二种更加直观，提高代码的可读性
//  >> 总结：在定义二维数组时，如果初始化了数据，可以省略行数