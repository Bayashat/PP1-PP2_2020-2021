#   1.Append Items
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)
-----------------------------------------------------------------------------
#   2.Insert Items
The insert() method inserts an item at the specified index:

thislist = ["apple", "banana", "cherry"]
thislist.insert(1, "orange")
print(thislist)
----------------------------------------------------------------------------
#   3.Extend List
Add the elements of "tropical" to "thislist":

thislist = ["apple", "banana", "cherry"]
tropical = ["mango", "pineapple", "papaya"]
thislist.extend(tropical)
print(thislist)
--------------------------------------------------------------------------------
#   4.Add Any Iterable
Add elements of a tuple to a list:

thislist = ["apple", "banana", "cherry"]
thistuple = ("kiwi", "orange")
thislist.extend(thistuple)
print(thislist)
--------------------------------------------------------------------------------