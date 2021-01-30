/*      5. set和multiset区别

**学习目标：

* 掌握set和multiset的区别

**区别：

* set不可以插入重复数据，而multiset可以
* set插入数据的同时会返回插入结果，表示插入是否成功
* multiset不会检测数据，因此可以插入重复数据
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

// 1.使用 set:
void test01()
{
    set<int> s1;
    pair<set<int> :: iterator, bool> ret = s1.insert(10);   // 用对组接受插入的结果

    if(ret.second)      // 判断对组都的第二个，也就是 bool。
    {
        cout << "YES, cha ru cheng gong" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    ret = s1.insert(10);
    if(ret.second)
    {
        cout << "YES, cha ru cheng gong" << endl;
    }
    else
    {
        cout << "NO" << endl;       // 会显示失败，因为不允许插入重复值
    }
}

// 2.使用multiset:  是允许插入重复值：
void test02()
{
    multiset<int> s2;
    s2.insert(10);
    s2.insert(10);

    // 遍历：
    for(multiset<int> :: iterator it = s2.begin();it!=s2.end();it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
}
int main()
{
    test02();

    return 0;
}
/*
总结：

* 如果不允许插入重复数据可以利用set
* 如果需要插入重复数据利用multiset
*/