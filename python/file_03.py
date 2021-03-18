words = ["fat","black","donkey"]

with open("donkey.txt") as f:
    data = f.read()
    
#data = data.replace("donkey","####")   
 
for word in words:
    data = data.replace(word,"#$%@*^$")

with open("donkey.txt","w") as f:
    f.write(data)    

    