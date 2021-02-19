#   1.Remove Specified Item
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)   # "apple","cherry"
------------------------------------------------------------
#   2.Remove Specified Index
thislist = ["apple", "banana", "cherry"]
thislist.pop(1)
print(thislist)   # "apple","cherry"
--------------------------------------------------------------
#   3.del keyword 
The del keyword can also delete the list completely:

thislist = ["apple", "banana", "cherry"]
del thislist
------------------------------------------------------------
#   4.Clear the List
The clear() method empties the list.

thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist) # []
------------------------------------------------------------------