#  1.Creating a Function
def my_function():
  print("Hello from a function")

-------------------------------------------------------------------------------
#  2.Calling a Function
To call a function, use the function name followed by parenthesis:

def my_function():
  print("Hello from a function")

my_function()
------------------------------------------------------------------------------
#  3.Arguments
Arguments are often shortened to "args" in Python documentations.

def my_function(fname):
  print(fname + " Refsnes")

my_function("Emil")
my_function("Tobias")
my_function("Linus")
---------------------------------------------------------------------------------------
#  4.Arbitrary Arguments, *args
If the number of arguments is unknown, add a * before the parameter name:

def my_function(*kids):
  print("The youngest child is " + kids[2])

my_function("Emil", "Tobias", "Linus")

Arbitrary Arguments are often shortened to "*args" in Python documentations.
-------------------------------------------------------------------------------------------
#  5.Keyword Arguments
You can also send arguments with the key = value syntax.
This way the order of the arguments does not matter.

def my_function(child3, child2, child1):
  print("The youngest child is " + child3)

my_function(child1 = "Emil", child2 = "Tobias", child3 = "Linus")

The phrase Keyword Arguments are often shortened to "kwargs" in Python documentations.
----------------------------------------------------------------------------------------------
#  6.Arbitrary Keyword Arguments, **kwargs
If the number of keyword arguments is unknown, add a double ** before the parameter name:

def my_function(**kid):
  print("His last name is " + kid["lname"])

my_function(fname = "Tobias", lname = "Refsnes")

Arbitrary Kword Arguments are often shortened to "**kwargs" in Python documentations.
-------------------------------------------------------------------------------------------------
#  7.Default Parameter Value
If we call the function without argument, it uses the default value:

def my_function(country = "Norway"):
  print("I am from " + country)

my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")
-------------------------------------------------------------------------------------------------------
#  8.Passing a List as an Argument
You can send any data types of argument to a function (string, number, list, dictionary etc.), and it will be treated as the same data type inside the function.

def my_function(food):
  for x in food:
    print(x)

fruits = ["apple", "banana", "cherry"]

my_function(fruits)
-----------------------------------------------------------------------------------------------------------------
#  9.Return Values

def my_function(x):
  return 5 * x

print(my_function(3))
-----------------------------------------------------------------------------------------
#  10.The pass Statement
function definitions cannot be empty, but if you for some reason have a function definition with no content, put in the pass statement to avoid getting an error.

def myfunction():
  pass
-----------------------------------------------------------------------------------------------
#  11.Recursion
def tri_recursion(k):
  if(k > 0):
    result = k + tri_recursion(k - 1)
    print(result)
  else:
    result = 0
  return result

print("\n\nRecursion Example Results")
tri_recursion(6)
-----------------------------------------------------------------------------------------------------
#  12.
def my_function(x:int):
    print(x)

my_function(3)

def my_function(x:str):
    print(x)

my_function(3)