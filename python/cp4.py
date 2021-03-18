#Take four variables- a, b, c and d. Let the user enter the values for the
#variables. Here, a >= b, c >= d, a,c > 0, b,d >= 0. Now perform the
#following operations:-
#A.) aCb + cPd (C = combination, P = permutation)
#B) a^c + b^d
import math as m
a = int(input())
b = int(input())
c = int(input())
d = int(input())
print(m.comb(a,b))
print(m.perm(c,d))
print(a**c)
print(b**d)

