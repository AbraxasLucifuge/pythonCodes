#Write a Python program to read first n lines of a file.
n = int(input('number of lines'))
i = 0
with open('readfirstnline.txt','r') as f:
    while i<n:
        contents = f.readline()
        i+=1
        print(contents,end='') 
       
