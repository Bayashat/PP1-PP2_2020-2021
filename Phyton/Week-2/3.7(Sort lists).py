#   1.Sort List Alphanumerically
Sort the list alphabetically:

thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort()
print(thislist)

---------------------------------------------------------------------------------
#   2.Sort the list numerically:

thislist = [100, 50, 65, 82, 23]
thislist.sort()
print(thislist)

------------------------------------------------------------------------------------------
#   3.Sort Descending
To sort descending, use the keyword argument reverse = True:

thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort(reverse = True)
print(thislist)

thislist = [100, 50, 65, 82, 23]
thislist.sort(reverse = True)
print(thislist)

------------------------------------------------------------------------------------------
#   4.Customize Sort Function
You can also customize your own function by using the keyword argument key = function.

Sort the list based on how close the number is to 50:

def myfunc(n):
  return abs(n - 50)

thislist = [100, 50, 65, 82, 23]
thislist.sort(key = myfunc)
print(thislist)
----------------------------------------------------------------------------------------------
#   5.Case Insensitive Sort
##若不区分大小写会先将大的sort:
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.sort()
print(thislist)

## Luckily we can use built-in functions as key functions when sorting a list.
So if you want a case-insensitive sort function, use str.lower as a key function:

thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.sort(key = str.lower)
print(thislist)
----------------------------------------------------------------------------------------
#   6.Reverse Order

thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.reverse()
print(thislist)
-----------------------------------------------------------------------------------------
