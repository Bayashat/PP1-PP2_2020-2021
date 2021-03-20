#   1.Create a Class
Create a class named MyClass, with a property named x:

class MyClass:
  x = 5
--------------------------------------------------------------------------------------
#   2.Create Object
Now we can use the class named MyClass to create objects:
Create an object named p1, and print the value of x:

p1 = MyClass()
print(p1.x) # 5
----------------------------------------------------------------------------------------
#   3.The __init__() Function
Create a class named Person, use the __init__() function to assign values for name and age:

class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("John", 36)

print(p1.name)
print(p1.age)
---------------------------------------------------------------------------------------------------------
Note: The __init__() function is called automatically every time the class is being used to create a new object.
--------------------------------------------------------------------------------------------------------------------
#   4.Object Methods
Insert a function that prints a greeting, and execute it on the p1 object:

class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def myfunc(self):
    print("Hello my name is " + self.name)

p1 = Person("John", 36)
p1.myfunc()
----------------------------------------------------------------------------------------------------------------------------------------
#   5.Note: The self parameter is a reference to the current instance of the class, and is used to access variables that belong to the class.
------------------------------------------------------------------------------------------------------------------------------------------
#   6.The self Parameter
Use the words mysillyobject and abc instead of self:

class Person:
  def __init__(mysillyobject, name, age):
    mysillyobject.name = name
    mysillyobject.age = age

  def myfunc(abc):
    print("Hello my name is " + abc.name)

p1 = Person("John", 36)
p1.myfunc()
--------------------------------------------------------------------------------------------------------------------------------------------------
#   7.Modify Object Properties
You can modify properties on objects like this:

p1.age = 40
---------------------------------------------------------------------------------------------------------------------------------------------
#   8.Delete Object Properties
Delete the age property from the p1 object:

del p1.age
---------------------------------------------------------------------------------------------------------------------------------------
#   9.Delete Objects
Delete the p1 object:

del p1
---------------------------------------------------------------------------------------------------------------------------------
#   10.The pass Statement
class definitions cannot be empty, but if you for some reason have a class definition with no content, put in the pass statement to avoid getting an error.

class Person:
  pass
------------------------------------------------------------------------------------------------------------------------------------------