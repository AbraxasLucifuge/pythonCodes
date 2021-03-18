n = int(input("enter number : "))

sum = 0
num=n
while n>0:
    r = n%10
    sum = sum*10 + r
    n = n//10

if num == sum :
    print(f"{num} is palindrome")    

else :
    print(f"{num} is not palindrome")
