/*   4. set查找和统计

**功能描述:

* 对set容器进行查找数据以及统计数据

**函数原型：

* `find(key);                  //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
* `count(key);                //统计key的元素个数
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

// 1. 查找；
void test01()
{
    set<int> s1;
    int n;
    cin >> n;
    int x;
    // 插入数据
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s1.insert(x);      
    }
    set<int> :: iterator pos = s1.find(3);  // 因为它会传一个迭代器，所以我们需要用iterator接受

    if(pos != s1.end())         // set容器find若没找到的话，会返回s.end(), 所以这么做；
    {
        cout << "found " << *pos << endl;   // 我们还可以解出来它的位置
    }
    else
    {
        cout << "NO" << endl;
    }
    
}

// 2.统计
void test02()
{
    set<int> s2;
    int n;
    cin >> n;
    int x;
    // 插入数据
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s2.insert(x);      
    }

    cout << s2.count(3) << endl;    // 统计 3 的个数
}
int main()
{
    test02();

    return 0;
}