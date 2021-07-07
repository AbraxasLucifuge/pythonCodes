#!/usr/bin/python3

def insertion_sort(a):
	for i in range(1,len(a)):
		key = a[i]
		j = i
		while (key < a[j-1] and j > 0):
			a[j] = a[j-1]
			j = j -1
		a[j] = key
	return a

a = list(map(int, input("Enter contents of array: ").split()))
print("Sorted array:", *insertion_sort(a))
