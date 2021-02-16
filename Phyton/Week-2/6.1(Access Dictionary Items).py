#   1.Accessing Items-1
You can access the items of a dictionary by referring to its key name, inside square brackets:

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = thisdict["model"]
-------------------------------------------------------------------------------------------------------------------------------------
#   2.Accessing Items-2 "Get"
There is also a method called get() that will give you the same result:

x = thisdict.get("model")
------------------------------------------------------------------------------------------------------------------------------------
#   3.Get Keys
The keys() method will return a list of all the keys in the dictionary.

x = thisdict.keys() # dict_keys(['brand', 'model', 'year'])
------------------------------------------------------------------------------------------------------------------------------------------
#   4.Get Values
The values() method will return a list of all the values in the dictionary.

x = thisdict.values()
---------------------------------------------------------------------------------------------------------------------------------
#   5.Get Items
The items() method will return each item in a dictionary, as tuples in a list.

x = thisdict.items()
--------------------------------------------------------------------------------------------------------------------------
#   6.Check if Key Exists
To determine if a specified key is present in a dictionary use the in keyword:

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
if "model" in thisdict:
  print("Yes, 'model' is one of the keys in the thisdict dictionary")
------------------------------------------------------------------------------------------------------------------------
