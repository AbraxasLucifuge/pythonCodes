#Create a package and inside the package create a module. The module
#should contain a string variable - 'NSUT is situated at Dwarka.' and an
#integer variable whose value is 6. Now, from the main program print the
#string and the integer by accessing the package.
from subpackage2 import blankmod2 as bl2
print(str(bl2.s))
print(bl2.a)
