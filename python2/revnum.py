#!/usr/bin/python3

r = int(input("Input number to be reversed: "))
a = []

while(r):
    a.append(r%10)
    r/=10
    r = int(r)

l = len(a)
res = 0
for i in range(l):
    res += (10**(l-i-1))*a[i]
print(res)
