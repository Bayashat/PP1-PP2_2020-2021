###   0. 容器算法迭代器初识

了解STL中容器、算法、迭代器概念之后，我们利用代码感受STL的魅力

STL中最常用的容器为Vector，可以理解为数组，下面我们将学习如何向这个容器中插入数据、并遍历这个容器

         vector基本概念

**功能：

* vector数据结构和数组非常相似，也称为单端数组


**vector与普通数组区别：

* 不同之处在于数组是静态空间，而vector可以动态扩展

**动态扩展：

* 并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间

         front:                                                                                            back:
         1          2       3       4       5       6        7        8     9       10         11           12
v.rend v.begain                                                                                          v.rbegain  v.end


* vector容器的迭代器是支持随机访问的迭代器