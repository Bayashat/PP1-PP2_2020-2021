/*      8 vector预留空间

**功能描述：
* 减少vector在动态扩展容量时的扩展次数

**函数原型：

* reserve(int len);   //容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/
#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    /*
    vector<int> v;       
    int num = 0;    // 统计开辟次数
    int *p = NULL;  // 创建个指针指向0；
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);

        if(p != &v[0])  // 如果不指向首地址了，
        {
            p = &v[0];  // 那就让它指向首地址
            num++;      // 并统计
        }
    }     
    cout << "num= " << num << endl;
    */

    // 利用reserve预留空间
    vector<int> v;    
    v.reserve(100000);
    int num = 0;  
    int *p = NULL;  
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);

        if(p != &v[0])  
        {
            p = &v[0];  
            num++;      
        }
    }     
    cout << "num= " << num << endl;

}
int main()
{
    test01();
}
//  总结：如果数据量较大，可以一开始利用reserve预留空间