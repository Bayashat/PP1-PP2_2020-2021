/*          stringstream 语句（1）
●stringstream是一个C++底下的类别，专门拿來读取字串并且处理，很多时候拿來做字串的切割，或者是int跟string类别之間的转换。
●标头档

#include <sstream>
若是要用到stringstream类别必須引入此标头档

●把int形态的数字转成string
此时的stringstream就像个桥梁，可以负责当中间转换的部分。
stringstream提供了 “>> ” 与 “<<” 运算子來读取或写入:
 << 代表写入stringstream中，>>代表从stringstream拿出。
*/

#include <sstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    stringstream s1;
    int number =1234;
    string output;  //要把number转成字串型的容器
    
    cout<<"number="<<number<<endl; //显示number=1234;
    
    s1<<number; //将以int宣告的number放入我们的stringstream中
    s1>>output; // 然后再放到output里
    
    cout<<"output="<<output<<endl;//显示output=1234;
    
    return 0;
}
/*
值得注意的是我們两行显示都是1234但是他的资料形态卻已经不一样了，第一个是int的形态，第二行则是string的形态。

●相反的stringstream也可以将string转成int
*/
int main2()
{
    stringstream string_to_int;
    string s1="12345";
    int n1;

    string_to_int<<s1;
    //也可以使用string_to_int.str(s1);
    //或者 s1=string_to_int.str();
    
    string_to_int>>n1;

    cout<<"s1="<<s1<<endl;//s1=12345
    cout<<"n1="<<n1<<endl;//n1=12345

    return 0;
}