/*   3. set插入和删除

**功能描述：

* set容器进行插入数据和删除数据:
**函数原型：

* `insert(elem);           //在容器中插入元素。
* `clear();                    //清除所有元素
* `erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
* `erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
* `erase(elem);            //删除容器中值为elem的元素。
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

void printSet(set<int> s)  //提供一个打印的函数
{
    for(set<int> :: iterator it = s.begin();it!= s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

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

    // 1.删除：
    s1.erase(s1.begin());   // 删掉了第一个元素；
    printSet(s1);
    // 1.1 删除重载版本：
    s1.erase(4);
    printSet(s1);
    
    // 2. 清空：
    s1.clear();
    printSet(s1);
    // 2.1. 也可以用 erase 清空：
    s1.erase(s1.begin(),s1.end());
    
}

int main()
{
    test01();
}