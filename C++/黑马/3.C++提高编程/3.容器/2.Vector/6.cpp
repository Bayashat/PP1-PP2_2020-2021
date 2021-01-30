/*   6 vector数据存取
**功能描述：

* 对vector中的数据的存取操作

**函数原型：

* `at(int idx);      //返回索引idx所指的数据
* `operator[];        //返回索引idx所指的数据
* `front();             //返回容器中第一个数据元素
* `back();              //返回容器中最后一个数据元素
*/
#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;       
    int n,x;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }       
    // 1. 利用[]方式访问数组中元素：
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
    // 2.利用at方式访问元素：
    for(int i=0;i<v.size();i++)
    {
        cout << v.at(i) << " " ;
    }
    cout << endl;
    // 3.获取第一个元素：
    cout << "first element is: " << v.front() << endl;
    // 4.获取最后个元素：
    cout << "end element is: " << v.back() << endl;
    
}

int main()
{
    test01();
}
/*
总结：
* 除了用迭代器获取vector容器中元素，[ ]和at也可以
* front返回容器第一个元素
* back返回容器最后一个元素
*/
