//数据的输入
/*
作用: 用于从键盘获取数据
关键字：cin
语法：cin >> 变量
*/
#include <iostream>
using namespace std;
#include <string>     //第4点 字符串型是需要此

int main()
{
    //1. 整型
    int a = 0;   // 0 是它的初始值
    cout << "please given a value: " << endl;
    cin >> a;
    cout << "value a= " << a << endl;

    // 2. 浮点型
    float f = 3.1415f;
    cout << "please given f value: " << endl;
    cin >> f;
    cout << "value f= " << f << endl;

    // 3. 字符型
    char ch = 'a';
    cout << "please given ch value" << endl;
    cin >> ch;
    cout << "value ch= " << ch << endl;

    // 4.字符串型    效果：  输入时 hello 会准换为输入的 词
    string str = "hello";
    cout << "please given str valur:" << endl;
    cin >> str;
    cout << "value str= " << str << endl;   

    // 5. 布尔类型
    bool flag = false;
    cout << "please given flag value" << endl;
    cin >> flag;     //在bool类型 只要是非零的值都代表真 
    cout << "value flag= " << flag << endl;


    return 0;
}