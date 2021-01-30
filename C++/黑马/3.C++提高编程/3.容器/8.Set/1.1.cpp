/*      1. set构造和赋值

功能描述：创建set容器以及赋值



构造：

* set<T> st;               //默认构造函数：
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
    //      1.默认构造函数：
    set<int> s1;
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s1.insert(x);        // 插入数据 只有insert 方式
    }

    set<int> :: iterator it;

    for(it = s1.begin();it!= s1.end();it++)       // 用迭代器遍历容器
    {
        cout << *it << " " ;                   // set容器特点：1.所以元素插入时会自动排序
    }                                                       //2. set容器不允许插入重复值

    cout << endl;
    set<int> :: reverse_iterator rit;       //创建一个交换顺序的iterator
    for(rit = s1.rbegin();rit!= s1.rend();rit++)       
    {
        cout << *rit << " " ;               // 输出交换顺序后的元素            
    }
    cout << endl;

    //  2.拷贝构造函数：
    set<int>s2(s1);         // 将s1的拷贝到了s2上
    for(set<int> :: iterator it = s2.begin();it!=s2.end();it++) // 遍历
    {
        cout << *it << " " ;
    }
    cout << endl;

    //  3.赋值
    set<int> s3;
    s3 = s2;
    for(set<int> :: iterator it = s3.begin();it!=s3.end();it++) // 遍历
    {
        cout << *it << " " ;
    }
}

int main()
{
    test01();
}