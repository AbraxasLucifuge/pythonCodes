#!/usr/bin/python3

def merge(a, l, m, r):
    R,L = [],[]
    for i in a[m+1:r+1]:
        R.append(i)
    for i in a[l:m+1]:
        L.append(i)
    ln,rn = m-l+1,r-m
    i,j,k = 0,0,l
    while (i<ln and j < rn):
        if L[i] >= R[j]:
            a[k] = R[j]
            j+=1
        else:
            a[k] = L[i]
            i+=1
        k+=1
    while i < ln:
        a[k] = L[i]
        i+=1
        k+=1
    while j < rn:
        a[k] = R[j]
        j+=1
        k+=1

def merge_sort(a, l, r):
    if l >= r:
        return
    m = (l+r)//2
    merge_sort(a, l, m)
    merge_sort(a, m+1, r)
    merge(a, l, m, r)

a = list(map(int, input("Enter the contents of the array: ").split()))
merge_sort(a, 0, len(a)-1)
print("Sorted array: ", *a)
