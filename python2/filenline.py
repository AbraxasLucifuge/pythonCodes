#!/usr/bin/python3
f = open('sample.txt', 'r')
for i in range(5):
    print(f.readline(), end='')
f.close()