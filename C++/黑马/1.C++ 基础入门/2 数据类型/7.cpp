//布尔类型(bool)
//作用：bool 数据类型代表真或假的值
//Bool类型只有两个值：
// True ---- 真（本质是1）
// False ---- 假（本质是0）
//Bool类型占用1个字节大小
#include <iostream>
using namespace std;

int main()
{
    //创建bool数据类型
    bool flag = true;  // true代表真(1)
    cout << flag << endl;

    flag = false;  //false代表假(0)
    cout << flag << endl;


    //查看bool类型所占内存空间
    cout << "bool's size is " << sizeof(bool) << endl;

    return 0;
}