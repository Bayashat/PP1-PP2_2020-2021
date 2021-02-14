#   1.Append Items
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)
-----------------------------------------------------------------------------
#   2.Extend List
Add the elements of "tropical" to "thislist":

thislist = ["apple", "banana", "cherry"]
tropical = ["mango", "pineapple", "papaya"]
thislist.extend(tropical)
print(thislist)
--------------------------------------------------------------------------------
#   3.Add Any Iterable
Add elements of a tuple to a list:

thislist = ["apple", "banana", "cherry"]
thistuple = ("kiwi", "orange")
thislist.extend(thistuple)
print(thislist)
--------------------------------------------------------------------------------