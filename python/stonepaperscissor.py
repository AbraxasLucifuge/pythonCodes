import random 

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

res = game_win(a,b)

print(f"comp chose {a}")

if res == None:
    print("tie")

elif res:
    print("won")    

else:
    print("lost")
