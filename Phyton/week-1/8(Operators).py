'''
1. 运算符的分类
2. 算数运算符
3. 赋值运算符
4. 复合赋值运算符
5. ⽐较运算符
6. 逻辑运算符
'''
#   < 1 >  算数运算符
+   加      1 + 1   输出结果为 2
-   减      1-1     输出结果为 0
*   乘      2 * 2   输出结果为 4
/   除      10 / 2  输出结果为 5
//  整除    9 // 4  输出结果为2
%   取余    9 % 4   输出结果为 1
**  指数    2 ** 4  输出结果为 16，即 2 * 2 * 2 * 2
()  ⼩括号  小括号⽤用来提高运算优先级，即 (1 + 2) * 3 输出结果为 9

 混合运算优先级顺序： () ⾼高于 ** ⾼高于 * / // % ⾼高于 + -
-----------------------------------------------------------------------------------------
#   < 2 > 赋值运算符
=   赋值        将= 右侧的结果赋值给等号左侧的变量

# 单个变量赋值
num = 1
print(num)

# 多个变量赋值
num1, float1, str1 = 10, 0.5, 'hello world'
print(num1)
print(float1)
print(str1)

# 多变量量赋相同值
a = b = 10
print(a)
print(b)
------------------------------------------------------------------------------------------------------
#   < 3 >  复合赋值运算符

+=      加法赋值运算符      c += a 等价于 c = c + a
-=      减法赋值运算符      c -= a 等价于 c = c- a
*=      乘法赋值运算符      c *= a 等价于 c = c * a
/=      除法赋值运算符      c /= a 等价于 c = c / a
//=     整除赋值运算符      c //= a 等价于 c = c // a
%=      取余赋值运算符      c %= a 等价于 c = c % a
**=         幂赋值运算符    c ** = a 等价于 c = c ** a

------------------------------------------------------------------------------------------------------
#   < 4 > ⽐较运算符 : 也叫关系运算符， 通常⽤用来判断。

    == ：
判断相等。如果两个操作数的结果相等，则条件结
果为真(True)，否则条件结果为假(False)
如a=3,b=3，则（a == b) 为 True

    != ： 
不不等于 。如果两个操作数的结果不不相等，则条件为
真(True)，否则条件结果为假(False)
如a=3,b=3，则（a == b) 为 True如
a=1,b=3，则(a != b) 为 True

    > ： 
运算符左侧操作数结果是否⼤大于右侧操作数结果，
如果⼤大于，则条件为真，否则为假
如a=7,b=3，则(a > b) 为 True

    < : 
运算符左侧操作数结果是否⼩小于右侧操作数结果，
如果⼩小于，则条件为真，否则为假
如a=7,b=3，则(a < b) 为 False

    >= : 
运算符左侧操作数结果是否⼤大于等于右侧操作数结
果，如果⼤大于，则条件为真，否则为假
如a=7,b=3，则(a < b) 为 False如
a=3,b=3，则(a >= b) 为 True

    <= : 
运算符左侧操作数结果是否⼩小于等于右侧操作数结
果，如果⼩小于，则条件为真，否则为假
如a=3,b=3，则(a <= b) 为 True

a = 7
b = 5
print(a == b) # False
print(a != b) # True
print(a < b) # False
print(a > b) # True
print(a <= b) # False
print(a >= b) # True
----------------------------------------------------------------------------------------------------------
#   < 5 >  逻辑运算符

and - 布尔"与"：
如果 x 为 False，x and y 返回 False，否则它返回 y 的值。
True and False :  返回 False。

or : 布尔"或"：
如果 x 是 True，它返回 True，否则它返回 y 的值。
False or True:  返回 True。

not : 布尔"非"：
如果 x 为 True，返回 False 。如果 x为 False，它返回 True。
not True : 返回 False
not False : 返回 True

----------------------------------------------------------------------------------------------------------------------
#   < 6 > 5.1 拓展 : 数字之间的逻辑运算
a = 0
b = 1
c = 2
# and运算符，只要有⼀一个值为0，则结果为0，否则结果为最后⼀一个⾮非0数字
print(a and b) # 0
print(b and a) # 0
print(a and c) # 0
print(c and a) # 0
print(b and c) # 2
print(c and b) # 1
# or运算符，只有所有值为0结果才为0，否则结果为第⼀一个⾮非0数字
print(a or b) # 1
print(a or c) # 2
print(b or c) # 1

-----------------------------------------------------------------------------------------------------------------------------
#   总结

 1. 算数运算的优先级
混合运算优先级顺序： () 高于 ** 高于 * / // % 高于 + -

 2.赋值运算符
=

 3.复合赋值运算符
+=
-=

 4.优先级
1. 先算复合赋值运算符右侧的表达式
2. 再算复合赋值运算的算数运算
3. 最后算赋值运算

 5.比较运算符
判断相等： ==
大于等于： >=
小于等于：<=
不等于： !=

 6.逻辑运算符
与： and
或：or
非：not
-------------------------------------------------------------------------------------------------------------------------