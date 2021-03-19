# with open('abc.txt') as f:
#     t = f.readlines()
#     c = sum(i[0]!='T' for i in t)
#     print(c)
print(sum(i[0]!='T' for i in open('abc.txt').readlines()))