#!/usr/bin/python3

for i in range(3):
    p,r,t = map(int, input("Enter the principal, rate and time: ").split())
    res = (p*r*t)/100
    print("The simple interest on given constraints is: %.2f" %res)