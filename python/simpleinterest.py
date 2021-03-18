
for i in range(3):
    p=int(input("enter principal :"))
    r=int(input("enter rate :"))
    t=int(input("enter time :"))
    
    si = (p*r*t)/100
    
    print(f'''simple interest with {p} principal ,{r}
    %rate and {t} years of time is {si}''')

