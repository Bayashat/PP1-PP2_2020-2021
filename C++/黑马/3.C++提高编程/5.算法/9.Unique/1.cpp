/*  Unique
介绍
unique是 STL 比较实用的一个函数 。 用于“去除”容器内相邻的重复的元素（只保留一个）。
这里说的去除并不是真正将容器内的重复元素删去，只是把重复的元素移到容器最后，但是依然在容器内。 
对于数组而言返回去重后最后一个元素的指针，而其他容器则是返回去重后最后一个元素的迭代器。
*/
#include <iostream>   
#include <algorithm>  
#include <vector>
using namespace std;

bool myfunction (int i, int j) 
{
  return (i==j);
}

int main () 
{

    int arr[] = {10,20,20,20,30,30,20,20,10};           // 10 20 20 20 30 30 20 20 10
    vector<int> v (arr,arr+9);

    /* 可以先这样查看数组的变化(也就是，unique元素们都跑到了前面，别的都在后面)
    unique(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " "
    }
    cout << endl;
    */
   
    vector<int>::iterator it;
    it = unique (v.begin(), v.end());   // 10 20 30 20 10 ?  ?  ?  ?

    /*  1.可以用这种方式将unique的elem显示
    for(vector<int>::iterator it2 = v.begin();it2!=it;it2++)
    {
        cout << *it2 << " ";       // 10 20 30 20 10
    }
    cout << endl;
    */

    // 2. 也可以这样直接重新定义为unique的容量
    v.resize(distance(v.begin(),it) ); // 10 20 30 20 10

    cout << distance(v.begin(),it) << endl; // 显示重新定义的容量是----5

    for(vector<int>::iterator it2 = v.begin();it2!=v.end();it2++)
    {
        cout << *it2 << " ";       // 10 20 30 20 10
    }
    
    return 0;
}