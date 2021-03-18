with open('myfile.txt',mode='a') as f:
    line = input("Enter the line you want to append - ")
    f.write("\n"+line)

with open('myfile.txt',mode='r') as f:
    print(f.readlines())