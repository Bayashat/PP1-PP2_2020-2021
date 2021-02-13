import math
res = 0
for i in range(10):
    a = 1/(i+1)**2
    res += a
res *= 6
res = math.sqrt(res)
print(res)