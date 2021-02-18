myset = {"apple", "banana", "cherry"}

------------------------------------------------------------------------------------------
#   1.Set
A set is a collection which is both unordered and unindexed.

thisset = {"apple", "banana", "cherry"}
print(thisset)
------------------------------------------------------------------------------------------------
Note: Sets are unordered, so you cannot be sure in which order the items will appear.
------------------------------------------------------------------------------------------------
#   2.Set Items
Set items are unordered, unchangeable, and do not allow duplicate values.
---------------------------------------------------------------------------------------------------------
#   3.Unordered
Unordered means that the items in a set do not have a defined order.
------------------------------------------------------------------------------------------------------------------
#   4.Set items can appear in a different order every time you use them, and cannot be referred to by index or key.
--------------------------------------------------------------------------------------------------------------------
#   5.Unchangeable
Sets are unchangeable, meaning that we cannot change the items after the set has been created.
-------------------------------------------------------------------------------------------------------------
Once a set is created, you cannot change its items, but you can add new items.
----------------------------------------------------------------------------------------------------------------
#   6.Duplicates Not Allowed
Sets cannot have two items with the same value.

Duplicate values will be ignored:

thisset = {"apple", "banana", "cherry", "apple"}

print(thisset)
----------------------------------------------------------------------------------------------------------------------
#   7.Length of a Set

thisset = {"apple", "banana", "cherry"}

print(len(thisset))
------------------------------------------------------------------------------------------------------------------------
#   8.Set Items - Data Types:

set1 = {"apple", "banana", "cherry"}
set2 = {1, 5, 7, 9, 3}
set3 = {True, False, False}
---------------------------------------------------------------------------------------------------------------------------
#   9.A set can contain different data types:

set1 = {"abc", 34, True, 40, "male"}
-----------------------------------------------------------------------------------------------------------------------------
#   10.type()
From Python's perspective, sets are defined as objects with the data type 'set':
<class 'set'>

myset = {"apple", "banana", "cherry"}
print(type(myset))
----------------------------------------------------------------------------------------------------------------------------
#   11.The set() Constructor

thisset = set(("apple", "banana", "cherry")) # note the double round-brackets
print(thisset)
------------------------------------------------------------------------------------------------------------------------------
#   12.Constract empty set:
s = set()