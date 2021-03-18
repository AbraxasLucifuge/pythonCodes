n = int(input("enter height of pyramid : "))

for i in range(n):
    for j in range(n-i):
        print("*" , end="")
    print()
