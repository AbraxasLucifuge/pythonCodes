f = open('myfile.txt', "r")
l = str(f.read())
v=0
c=0
for i in l:
    k = ord(i)
    if (k>=65 and k<=90) or (k>=97 and k<=122):
        if i in ['a','e','i','o','u']:
            v+=1
        else:
            c+=1
print("vowels: ", v)
print("consonents: ", c)
f.close()