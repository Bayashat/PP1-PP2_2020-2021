/*      1.find 函数---用于查找
    语句: s.find(t)
*/
/*  #### 3.8.2 set构造和赋值

功能描述：创建set容器以及赋值



构造：

* set<T> st;                 //默认构造函数：
* set(const set &st);      //拷贝构造函数

赋值：

*  set& operator=(const set &st);   //重载等号操作符
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

void test01()
{
    set<int> s;
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s.insert(x);       
    }

    int z;
    cin >> z;

    if(s.find(z)==s.end())      // 如果没有找到的情况
    {
        cout << "NOT FOUND";
    }
    else
    {
        cout << "Found" ;
    }
    
}
int main()
{
    test01();
}