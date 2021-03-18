#!/usr/bin/python3
t = int(input("Enter the number: "))
res = 0
while(t):
    res+=(t%10)
    t/=10
    t = int(t)
print("The sum of digits of number is: %d"%res)