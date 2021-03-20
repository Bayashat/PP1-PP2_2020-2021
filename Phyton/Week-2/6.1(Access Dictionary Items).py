#  在dict访问元素，是没有下标的概念的.

#   1.Accessing Items-1 ： 使用key值访问对应的value值
You can access the items of a dictionary by referring to its key name, inside square brackets:

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
print(thisdict["model"])  # "Mustang"

print(thisdict["xaxax"]) # Error  若访问没有的key,会报错
-------------------------------------------------------------------------------------------------------------------------------------
#   2. Get.() 
There is also a method called get() that will give you the same result:

print(thisdict.get("model")) # "Mustang"

print(thisdict.get("xaxax")) # "None"  用 get访问没有的key,会返回NONE

-------------------------------------------------------------------------------------------------------------------------------------
# 3. Get(key,数据值)  如果key存在，返回key对应的value, 若key不存在,返回书写的数据值. 但是对原dict不影响
my_dict = {'name': "issac",'age':18, "country":"KZ"}
print(my_dict.get('age',1))  # 18
print(my_dict.get('hobby',"foot")) # foot
print(my_dict)  # 'name': "issac",'age':18, "country":"KZ"

------------------------------------------------------------------------------------------------------------------------------------
#   4. Keys.() : get keys
The keys() method will return a list of all the keys in the dictionary.

x = thisdict.keys() # dict_keys(['brand', 'model', 'year'])
------------------------------------------------------------------------------------------------------------------------------------------
#   5.Get Values
The values() method will return a list of all the values in the dictionary.

x = thisdict.values()
---------------------------------------------------------------------------------------------------------------------------------
#   6.Get Items
The items() method will return each item in a dictionary, as tuples in a list.

x = thisdict.items()
--------------------------------------------------------------------------------------------------------------------------
#   7.Check if Key Exists
To determine if a specified key is present in a dictionary use the in keyword:

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
if "model" in thisdict:
  print("Yes, 'model' is one of the keys in the thisdict dictionary")
------------------------------------------------------------------------------------------------------------------------
