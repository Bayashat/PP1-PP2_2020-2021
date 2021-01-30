    //      排序，转换
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {

    vector<int> v;

    sort(v.begin(),v.end());    //这样排序
    reverse(v.begin(),v.end()); 

    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }

    

	return 0;
}