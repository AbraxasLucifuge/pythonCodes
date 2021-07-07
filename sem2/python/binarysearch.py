#!/usr/bin/python3

def binary_search(a, val):
    h = len(a)
    l = 0
    while(l < h):
        mid = (l+h)//2
        if(a[mid] >= val):
            h = mid
        else:
            l = mid+1
    if (h >= len(a) or a[h] != val):
        return 0;
    return h+1

a = list(map(int, input("Enter contents of array: ").split()))
x = int(input("Enter number to find in array: "))

pos = binary_search(a,x)

if pos == 0:
    print("WARNING: Input number is not present in array")
else:
    print("positon of input number is", pos)
