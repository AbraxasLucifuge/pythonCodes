import random 
c = 0

while True: 
    def game_win(x, y):
       
        if x == 1:
            if y == 2:
                return True
            elif y == 3:    
                return False
        if x == 2:
            if y == 3:
                return True
            elif y == 1:    
                return False
        if x == 3:
            if y == 1:
                return True
            elif y == 2:    
                return False 
        else:
            return None

    a = random.randint(1,3)
    b = int(input("stone(1) , paper(2) or scissor(3)? : "))
    r = game_win(a,b)
    if r is True :
        c = c + 1
    elif r is False:
        break
    else:    
        continue
    
#print(c)
#f = open("hiscore.txt","w")
#res = int(f.read())
with open("hiscore.txt") as f:
    res = int(f.read())

if c>res:
    with open("hiscore.txt","w") as f:
        f.write(str(c))


    
    
 

                








