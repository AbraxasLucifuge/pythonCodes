#!/usr/bin/python3

t = int(input("Enter the number of rows: "))

for i in range(1,t+1):
    print(" "*(t-i), end="")
    j = 1
    for l in range(i):
        if l==0:
            print(j, end=" ")
        else:
            j = (j*(i-l))//l
            print(j, end=" ")
    print()
        
