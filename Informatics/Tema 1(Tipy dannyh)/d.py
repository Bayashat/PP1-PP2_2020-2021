res = 0
for i in range(10):
    cur = 4 /( (i*2)+1)
    if(i%2==1):
        cur*=-1
    res += cur
print(res)