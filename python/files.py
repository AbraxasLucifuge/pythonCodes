f=open("poem.txt","r")
txt = f.read()
if "twinkle" in txt:
    print("success")
else: 
    print("failure")
