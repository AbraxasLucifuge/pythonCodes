#!/usr/bin/python3

def insertion_sort(a):
    for i in range(1,len(a)):
        j = i
        while (a[j] < a[j-1] and j > 0):
            tmp = a[j]
            a[j] = a[j-1]
            a[j-1] = tmp
    return a

a = list(map(int, input("Enter contents of array: ").split()))
print("Sorted array:", *insertion_sort(a))
