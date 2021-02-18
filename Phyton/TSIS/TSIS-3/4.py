#   https://informatics.mccme.ru/mod/statements/view.php?id=4163&chapterid=3850#1
a = list(input().split())
list2= []
counter = 0

for i in range(len(a)):
    if(a[i]!='0'):
        list2.append(a[i])
    else:
        counter+=1
for i in range(counter):
    list2.append('0')

for i in range(len(list2)):
    print(list2[i], end = ' ')