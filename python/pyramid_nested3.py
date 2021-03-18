n = int(input("enter height of pyramid : "))

for m in range(n):
    for i in range(n-m-1):
        print(" ",end="")
    for j in range(2*m+1):
        print("*",end="")
    print()    
