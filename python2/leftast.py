#!/usr/bin/python3

t = int(input("Enter the number of rows: "))
for i in range(t):
    print(" "*(t-i-1) + "*"*(i+1))