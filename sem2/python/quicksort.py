#!/usr/bin/python3

def divide(a,l,h):
    k = a[h]
    i = l-1
    for j in range(l,h):
        if a[j] < k:
            i+=1
            tmp = a[i]
            a[i] = a[j]
            a[j] = tmp
    tmp = a[i+1]
    a[i+1] = a[h]
    a[h] = tmp
    return i+1
def quicksort(a,l,h):
    if l<h:
        div = divide(a,l,h)
        quicksort(a,l,div-1)
        quicksort(a,div+1,h)

a = list(map(int, input("Enter contents of array: ").split()))
quicksort(a, 0, len(a)-1)
print("Sorted array: ", *a)
