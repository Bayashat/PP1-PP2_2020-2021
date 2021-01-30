/*    1. stack 常用接口

功能描述：栈容器常用的对外接口

构造函数：

* `stack<T> stk;                                 //stack采用模板类实现， stack对象的默认构造形式
* `stack(const stack &stk);            //拷贝构造函数

赋值操作：

* `stack& operator=(const stack &stk);           //重载等号操作符

数据存取：

* `push(elem);      //向栈顶添加元素
* `pop();                //从栈顶移除第一个元素
* `top();                //返回栈顶元素

大小操作：

* `empty();            //判断堆栈是否为空
* `size();               //返回栈的大小
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> n;
    // 入栈：
    n.push(10);
    n.push(20);
    n.push(30);
    n.push(40);
    n.push(50);

    // 只要栈不为空，查看栈项，并且执行出栈操作：
    while(!n.empty())
    {
        cout << n.top() << " ";
        n.pop();
    }

}