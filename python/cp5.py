#5. Using built-in modules,
#a. Display the current working directory
#b. Create two new directories.
#c. Display the files of the current working directory.
#d. Delete one of the newly created directories.
#e. Again, Display the files of the current working directory.
import os
print(os.getcwd())
os.mkdir('sampledir1')
os.mkdir('sampledir2')
print(os.listdir())