#!/usr/bin/python3

def linear_search(a, val):
    for i in range(len(a)):
        if a[i] == val:
            return i+1
    return 0
a = list(map(int,input("Enter the contents of array: ").split()))
x = int(input("Enter the number: "))
pos = linear_search(a, x)

if(pos == 0):
    print("The input number is not present in the array")
else:
    print("The position of the input number is", pos)
