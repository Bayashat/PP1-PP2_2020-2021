#   1.Access Items
Print the second item of the list:

thislist = ["apple", "banana", "cherry"]
print(thislist[1])
-------------------------------------------------------------------------------
#   2.Negative Indexing
Negative indexing means start from the end.
-1 refers to the last item, -2 refers to the second last item etc.

thislist = ["apple", "banana", "cherry"]
print(thislist[-1])
------------------------------------------------------------------------------------
#   3.Range of Indexes-1
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5])
-----------------------------------------------------------------------------------
#   4.Range of Indexes-2
This example returns the items from the beginning to, but NOT including, "kiwi":

thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[:4])
-------------------------------------------------------------------------------------
#   5.Range of Indexes-3
This example returns the items from "cherry" to the end:

thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:])
------------------------------------------------------------------------------------
#   6.Range of Negative Indexes
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[-4:-1])
----------------------------------------------------------------------------------------
#   7.Check if Item Exists
Check if "apple" is present in the list:

thislist = ["apple", "banana", "cherry"]
if "apple" in thislist:
  print("Yes, 'apple' is in the fruits list")
