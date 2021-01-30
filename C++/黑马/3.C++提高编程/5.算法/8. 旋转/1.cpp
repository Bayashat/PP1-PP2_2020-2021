/*       rotate()
    语句： rotate(v.begin(),v.begin()+3,v.end());  
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    rotate(v.begin(),v.begin()+3,v.end());  // 本来是1-10嘛，现在旋转后，将4-10的元素旋到了前面，1，2，3 在后面。

    for(int i=0;i<10;i++)
    {
        cout << v[i] << " ";
    }
}