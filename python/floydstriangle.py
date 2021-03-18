n = int(input("enter height of pyramid : "))

f=1

for i in range(n):
    for j in range(i+1):
        print(f,end=" ")
        f=f+1
    print()    