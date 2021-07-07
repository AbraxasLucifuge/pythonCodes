#!/usr/bin/python3

def selection_sort(a):
    for i in range(len(a)-1, -1, -1):
        m=0
        for j in range(i):
            if a[j] < a[m]:
                m = j
        x = a.pop(m)
        a.append(x)
    return a

a = list(map(int, input("Enter contents of array: ").split()))
print("Sorted array:", *selection_sort(a))

