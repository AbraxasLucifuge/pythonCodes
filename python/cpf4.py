#Write a Python program to count the frequency of words in a file
#and display them.
from collections import Counter
with open('readfirstnline.txt') as f:
    print(Counter(f.read().split()))
