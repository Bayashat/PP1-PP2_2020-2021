#   https://informatics.mccme.ru/mod/statements/view.php?id=4163&chapterid=3835#1
x = input().split()
min = 1000
for i in range(len(x)):
    s = int(x[i])
    if (s<min)and(s>0):
        min = s
print(min)