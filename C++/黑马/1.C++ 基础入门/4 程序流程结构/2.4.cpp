/*
   for循环语句

**作用： 满足循环条件，执行循环语句

**语法：  for(起始表达式;条件表达式;末尾循环体) { 循环语句; }
*/
#include <iostream>
using namespace std;

int main()
{
    // For 循环
    // 从数字 0 打印都 9
    for(int i = 0; i < 10; i++)  // For循环会只执行一次"起始表达式"，然后判断"条件"，然后执行花括号里的代码，最后再执行"末尾循环体"
    {                            // 从第2次开始，程序会从判断条件开始
        cout << i << endl;
    }                            //注意：for循环中的表达式，要用分号进行分隔
    return 0;
}

// 总结：while , do...while, for都是开发中常用的循环语句，for循环结构比较清晰，比较常用