contents = True
i = 1

with open("logfile.txt") as f: 
    while contents: 
        i+=1
        contents = f.readline()
        
        if 'python' in contents.lower(): # even searches PYTHON    
            print(f"its there in line {i}")
            print(contents) 
        else:    
            continue  
 
      
