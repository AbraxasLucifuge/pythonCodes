#Write a Python program to copy the contents of a file to another file
#with open('readfirstnline.txt') as f1:
#    contents = f1.readlines()
#    with open('new.txt','w') as f2:
#        f2.write(str(contents))
import shutil
shutil.copyfile('readfirstnline.txt','new.txt')