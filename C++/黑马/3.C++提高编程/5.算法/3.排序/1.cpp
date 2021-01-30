/*    5.3.1 sort

**功能描述：

* 对容器内元素进行排序

**函数原型：

- sort(iterator beg, iterator end, _Pred);  

  // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置

  //  beg    开始迭代器

  //  end    结束迭代器

  // _Pred  谓词
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>  // 防止从大到小排序可能在某旧版本出错，最好加这个头文件
using namespace std;

bool f(int a,int b)
{
	return a>b;
}

void test01() 
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	// 1.sort默认从小到大排序
	sort(v.begin(), v.end());

	// 2. sort(v.begin(), v.end(), less<int>());

	//从大到小排序
	// 1.
	sort(v.begin(), v.end(), greater<int>());
	// 2.
	sort(v.begin(),v.end(),f);  // f 指从大到小排序

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}
int main() 
{
    test01();
	return 0;
}