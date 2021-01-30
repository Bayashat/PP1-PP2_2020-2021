/*     1.queue 常用接口


功能描述：栈容器常用的对外接口

构造函数：

- queue<T> que;                                 //queue采用模板类实现，queue对象的默认构造形式
- queue(const queue &que);            //拷贝构造函数

赋值操作：

- queue& operator=(const queue &que);           //重载等号操作符

数据存取：

- push(elem);                             //往队尾添加元素
- pop();                                      //从队头移除第一个元素
- back();                                    //返回最后一个元素
- front();                                  //返回第一个元素

大小操作：

- empty();            //判断堆栈是否为空
- size();               //返回栈的大小
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> n;
    n.push(10);
    n.push(10);
    n.push(10);
    n.push(10);
    n.push(10);

    while(!n.empty())
    {
        cout << n.front() << " ";
        n.pop();
    }

    return 0;
}