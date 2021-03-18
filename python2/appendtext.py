#!/usr/bin/python3

f = open('sample.txt', 'a')
L = ['Line 10\n', 'Line 11\n', 'Line 12\n']
f.writelines(L)
f.close()
f1 = open('sample.txt', 'r')
print(f1.read())
