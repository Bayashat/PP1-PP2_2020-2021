//实型（浮点型）
//作用：用于表示小数
#include <iostream>
using namespace std;
/*浮点型分为两种：
  单精度  Float
  双精度  Double
  两者的区别在于表示的有效数字范围不同。
   Float      4 字节      7位有效数字
   double     8 字节      15-16位有效数字
   */
int main()
{
    float f1 = 3.1415926f;

    cout << "f1 = " << f1 << endl;

    double d1 = 3.1415926;

    cout << "d1 = " << d1 << endl;

//默认情况下，输入一个小数，会显示6位有效数字
    return 0;
}