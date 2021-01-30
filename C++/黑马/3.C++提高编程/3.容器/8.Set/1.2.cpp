/*  2. set大小和交换

**功能描述：

* 统计set容器大小以及交换set容器



**函数原型：

* `size();`          //返回容器中元素的数目
* `empty();`        //判断容器是否为空
* `swap(st);`      //交换两个集合容器
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

// 1.大小：
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
    // 打印：
    printSet(s1);
    // 判断是否为空：
    if(s1.empty())
    {
        cout << "s1 is Empty" << endl;
    }
    else
    {
        cout << "s1 isn't empty" << endl;
        cout << "s1's size is " << s1.size() << endl;
    }
    
}

// 2.交换：
void test02()
{
    // 第一个容器：
    set<int> s1;
    int z;
    cin >> z;
    int y;
    
    for(int i=0;i<z;i++)
    {
        cin >> y;
        s1.insert(y);      
    }

    // 第二个容器：
    set<int> s2;
    int q;
    cin >> q;
    int w;
    for(int i=0;i<q;i++)
    {
        cin >> w;
        s2.insert(w);      
    }
    cout << "before:" << endl;
    printSet(s1);
    printSet(s2);
    cout << "After:" << endl;
    s1.swap(s2);    // 这是交换代码
    printSet(s1);
    printSet(s2);


}

int main()
{
    test02();
}