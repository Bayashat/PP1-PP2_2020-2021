/*      5. vector容量和大小

**功能描述：

* 对vector容器的容量和大小操作
* 在 vector 中，它会多储备容量，容量会大于等于大小。

**函数原型：
* empty();                         /判断容器是否为空

* capacity();                      //容器的容量

* size();                          //返回容器中元素的个数

* resize(int num);             //重新指定容器的长度为num，若容器变长，则以默认值(0)填充新位置。

  ​					 //如果容器变短，则末尾超出容器长度的元素被删除。

* resize(int num, elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

  ​				       //如果容器变短，则末尾超出容器长度的元素被删除。
*/
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int> :: iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
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
    printVector(v);
    // 1.判断是否为空
    if(v.empty())   // 为真，则代表为空
        cout << "Is empty " << endl;
    else
        cout << "Isn't empty " << endl;
        cout << "v's capacity is " << v.capacity() << endl;
        cout << "v's size is " << v.size() << endl;
    // 2. 重新指定大小(resize)：
    v.resize(10);
    printVector(v);     // 如果重新指定的比以前长了，默认以0填充新的位置。

    // 3. 重新指定大小，以指定的值：
    v.resize(15,10);    // 利用重载版本，可以指定默认填充值，参数2
    printVector(v);

    v.resize(5);    
    printVector(v);   // 如果重新指定的比以前短了，超出部分会删掉
}
int main()
{
    test01();
}
/*
总结：
* 判断是否为空  --- empty
* 返回元素个数  --- size
* 返回容器容量  --- capacity
* 重新指定大小  ---  resize
*/
