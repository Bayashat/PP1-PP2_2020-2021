#   Once a set is created, you cannot change its items, but you can add new items
---------------------------------------------------------------------------------------------------------
#   1.add() method.

thisset = {"apple", "banana", "cherry"}

thisset.add("orange")

print(thisset)
------------------------------------------------------------------------------------------------------
#   2.Add Sets
To add items from another set into the current set, use the update() method.

thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}

thisset.update(tropical)

print(thisset)
----------------------------------------------------------------------------------------------------------
#   3.Add Any Iterable
thisset = {"apple", "banana", "cherry"}
mylist = ["kiwi", "orange"]

thisset.update(mylist)

print(thisset)
--------------------------------------------------------------------------------------------------------