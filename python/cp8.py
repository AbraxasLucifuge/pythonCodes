#Create a package and a module inside it. The module should be able to
#take a value ‘a’ and return ‘a * a’. Now, create a subpackage and it
#should contain a module that takes a value ‘b’ and return ‘b + b’. Here, a
#and b are integer variables.
from subpackage3 import blankmod3 as bl3
print(bl3.fun(4))
from subpackage3.subsubpkg import blankmod4 as bl4
print(bl4.fun1(3))