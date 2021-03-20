import math
res = 0
for i in range(1,11):
    res += 1/i**2
res = math.sqrt(res*6)
print(res)