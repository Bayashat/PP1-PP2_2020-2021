//  8.2 指针和map容器
#include <iostream>
#include <map>
using namespace std;

void f(map<int,int> *m)
{
    cout << m->size() << endl;
}
int main()
{
    map<int,int> m;
    m.insert(make_pair(2,3));
    m.insert(make_pair(12,3));
    m.insert(make_pair(21,3));
    m.insert(make_pair(222,3));
    f(&m);
}