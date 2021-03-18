#Create a package. It should contain 4 subpackages. Each subpackkage
#should contain a module each. Each module should perform one
#operation from the following – addition, subtraction, multiplication and
#division. Do note that each modules should take two integer variables(a
#and b) and should return the result. Here, a,b>0.
from pkg9.subpkg1 import addmod as a
print(a.add(7,2))
from pkg9.subpkg2 import submod as s
print(s.sub(5,1))
from pkg9.subpkg3 import mulmod as m
print(m.mul(9,5))
from pkg9.subpkg4 import divimod as d
print(d.divi(6,3))