#   1.Remove Item
To remove an item in a set, use the "remove()", or the "discard()" method.

## 1)
thisset = {"apple", "banana", "cherry"}

thisset.remove("banana")

print(thisset)
## 2)
Remove "banana" by using the discard() method:

thisset = {"apple", "banana", "cherry"}

thisset.discard("banana")

print(thisset)
####  Note: If the item to remove does not exist, discard() will NOT raise an error.
--------------------------------------------------------------------------------------------
#   2.pop()
# You can also use the pop() method to remove an item, but this method will remove the last item. Remember that sets are unordered, so you will not know what item that gets removed.

thisset = {"apple", "banana", "cherry"}
x = thisset.pop()

print(x)

print(thisset)
--------------------------------------------------------------------------------------------------
#   3.clear()
The clear() method empties the set:

thisset = {"apple", "banana", "cherry"}

thisset.clear()

print(thisset)
--------------------------------------------------------------------------------------------------------
#   4.del()
The del keyword will delete the set completely:

thisset = {"apple", "banana", "cherry"}

del thisset

print(thisset)
-------------------------------------------------------------------------------------------------------