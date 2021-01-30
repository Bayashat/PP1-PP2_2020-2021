#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void printVector2(vector<int> * v)      // 这次和上一个不一样，会直接影响
{
    v->push_back(12);
    cout << v->size() << endl;
    for(int i = 0; i < v->size(); ++i){
        cout << v->at(i) << " ";
    }
}
void sample9() 
{
    vector<int> v;
    int x;

    while(1)
    {
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }
    printVector2(&v);
    cout << endl;
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    sample9();

    return 0;
}