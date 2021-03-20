# 元组数据不不⽀支持修改，只⽀支持查找，具体如下：
    # <1> 按下标查找数据
tuple1 = ('aa', 'bb', 'cc', 'bb')
print(tuple1[0]) # aa

    # <2> index()：查找某个数据，如果数据存在返回对应的下标，否则报错，语法和列表、字符串的index方法相同。
tuple1 = ('aa', 'bb', 'cc', 'bb')
print(tuple1.index('aa')) # 0

    # <3> count()：统计某个数据在当前元组出现的次数
tuple1 = ('aa', 'bb', 'cc', 'bb')
print(tuple1.count('bb')) # 2

    # <4> len()：统计元组中数据的个数
tuple1 = ('aa', 'bb', 'cc', 'bb')
print(len(tuple1)) # 4

    # <5> 
    # 注意：元组内的直接数据如果修改则⽴即报错
tuple1 = ('aa', 'bb', 'cc', 'bb')
tuple1[0] = 'aaa'
    # 但是如果元组⾥面有列表，修改列表里⾯的数据则是⽀持的，故⾃觉很重要。
tuple2 = (10, 20, ['aa', 'bb', 'cc'], 50, 30)
print(tuple2[2]) # 访问到列列表
# 结果：(10, 20, ['aaaaa', 'bb', 'cc'], 50, 30)
tuple2[2][0] = 'aaaaa'
print(tuple2)