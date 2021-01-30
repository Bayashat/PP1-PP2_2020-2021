//      8.1 指针和 vector 容器
#include <bits/stdc++.h>
using namespace std;

// 1.这是常规的 vector 操作：
void t(vector<int> v)
{
    v[0] = 12;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}

// 2.这是带有指针的vector操作：
void f(vector<int> *v)  
{
    v->at(0)= 12;   // 这样赋值
    for(int i=0;i<v->size();i++)    // 这样输出
    {
        cout << v->at(i) << " ";
    }
}

//  3.
void f2(vector<int> &v)
{

    v[0] = 10;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v({1,2,3,4});   
    f(&v);  // 传地址
}