/*          4. map查找和统计

**功能描述：

- 对map容器进行查找数据以及统计数据

**函数原型：

- `find(key);                  //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回map.end();
- `count(key);                //统计key的元素个数
*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int>&m)
{
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    // 1. 查找：
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos = m.find(3);// 不管你查到了还是没查到，它都会返回一个迭代器， 所以需要一个迭代器接受。
    if(pos != m.end()) cout << "Found key= " << (*pos).first << " value= " << pos->second << endl;
    else cout << "Not found" << endl;

    // 2.统计：
    int num = m.count(3);       // count统计而言，结果无非是 1 或 0 ;
    cout << num << endl;        // multimap的可能会大于0
}
   
int main()
{
    test01();

    return 0;
}
/*
总结：
- 查找   ---  find    （返回的是迭代器）
- 统计   ---  count  （对于map，结果为0或者1）
*/