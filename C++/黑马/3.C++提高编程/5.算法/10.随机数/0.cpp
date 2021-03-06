/*
计算机的随机数都是由伪随机数，即是由小M多项式序列生成的，其中产生每个小序列都有一个初始值，即随机种子。
（注意： 小M多项式序列的周期是65535，即每次利用一个随机种子生成的随机数的周期是65535，当你取得65535个随机数后它们又重复出现了。）

我们知道 rand() 函数可以用来产生随机数，但是这不是真正意义上的随机数，是一个伪随机数，
是根据一个数（我们可以称它为种子）为基准以某个递推公式推算出来的一系列数，
当这系列数很大的时候，就符合正态公布，从而相当于产生了随机数，但这不是真正的随机数，当计算机正常开机后，这个种子的值是定了的，除非你破坏了系统。
*/