#!/usr/bin/python3

def bubblesort(a):
    for i in range(len(a)):
        for j in range(len(a)-1):
            if a[j] > a[j+1]: 
                tmp = a[j]
                a[j] = a[j+1]
                a[j+1] = tmp
    return a
a = list(map(int, input("Enter contents of array: ").split()))
print("Sorted array:", *bubblesort(a))
