#!/usr/bin/python3

t = int(input("Enter the number of rows: "))
n = 1
for i in range(1,t+1):
    for j in range(i):
        print(n, end=" ")
        n+=1
    print("")