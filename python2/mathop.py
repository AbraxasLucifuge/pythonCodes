#!/usr/bin/python3
import math as mt
a,b,c,d = map(int, input("Enter a, b, c, d: ").split())

print("The first expression aCb + cPd =", mt.comb(a,b) + mt.perm(c,d))
print("The second expression a^c + b^d  =", mt.pow(a,c) + mt.pow(b,d))