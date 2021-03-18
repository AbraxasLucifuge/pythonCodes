#!/usr/bin/python3

t = int(input("Enter the number: "))
num = t
a = []
while(t):
    a.append(t%10)
    t/=10
    t = int(t)

l = len(a)
n = 0
for i in a:
    n += i**l
if(n == num):
    print("The number is an armstrong number")
else:
    print("The number is not an armstrong number")