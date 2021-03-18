#!/usr/bin/python3
import os
print(os.getcwd())
os.mkdir('hi')
os.mkdir('bye')
print(os.listdir())
os.rmdir('hi')
print(os.listdir())