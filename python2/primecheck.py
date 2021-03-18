#!/usr/bin/python3
import math
t = int(input("Enter the number: "))
n = int(math.sqrt(t))

flag = 1
i = 2
while(i<=n):
    if(t%i == 0):
        flag = 0
        break
    i+=1
if(flag):
    print("The number is a prime number")
else:
    print("The number is not a prime number")