n = int(input("enter number : "))
flag = False
for i in range(2,n):
    if n%i == 0 :
        flag = True
        break

if flag == True:
    print(f"{n} is not prime")
else:
    print(f"{n} is prime")  
