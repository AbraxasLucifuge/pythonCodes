#!/usr/bin/python3
t = int(input("Enter the number: "))
s = str(t)
l = len(s)

flag = 1
for i in range(l):
    if s[i] != s[l-1-i]:
        flag = 0
        break
if(flag):
    print("The number is a palindrome")
else:
    print("The number is not a palindrome")