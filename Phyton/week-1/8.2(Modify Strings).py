# 1.Upper Case 
# The "upper()" method returns the string in upper case:
a = "Hello, World!"
print(a.upper())
---------------------------------------------------------------------------------------------------------------
# 2.Lower Case
# The "lower()" method returns the string in lower case:
a = "Hello, World!"
print(a.lower())
---------------------------------------------------------------------------------------------------------------
# 3.Remove Whitespace 
# Whitespace is the space before and/or after the actual text, and very often you want to remove this space.
# The strip() method removes any whitespace from the beginning or the end:
a = " Hello, World! "
print(a.strip()) # returns "Hello, World!"
----------------------------------------------------------------------------------------------------------------------
# 4.Replace String
# The replace() method replaces a string with another string:
a = "Hello, World!"
print(a.replace("H", "J"))
---------------------------------------------------------------------------------------------------------------------
# 5.Split String
# The split() method returns a list where the text between the specified separator becomes the list items.
# The split() method splits the string into substrings if it finds instances of the separator:
a = "Hello, World!"
print(a.split(",")) # returns ['Hello', ' World!']