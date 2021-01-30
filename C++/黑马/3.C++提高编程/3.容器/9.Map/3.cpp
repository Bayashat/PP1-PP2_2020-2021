/*                3.  map插入和删除

**功能描述：

- map容器进行插入数据和删除数据

**函数原型：

- `insert(elem);           //在容器中插入元素。
- `clear();                    //清除所有元素
- `erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
- `erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
- `erase(key);            //删除容器中值为key的元素。
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
    map<int,int> m;
    // 1.插入：

        // 第一种：
    m.insert(pair<int,int>(1,10));

        // 第二种：
    m.insert(make_pair(2,20));

        // 第三种：
    m.insert(map<int,int>::value_type(3,30));

        // 第四种：
    m[4] = 40;          // 不建议用这种方式插入，它的用途是可以利用key访问value

    printMap(m);

    // 2. 删除：
    m.erase(m.begin());
    printMap(m);

    m.erase(3);     // 按照key删除
    printMap(m);

    // 清空：
    m.erase(m.begin(),m.end());

    m.clear();
    printMap(m);
}
   
int main()
{
    test01();

    return 0;
}
