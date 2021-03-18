wordlist = []
wordfreq = []
with open('myfile.txt',mode='r') as f:
    for line in f.readlines():
        for word in line.split():
            f.seek(0)
            doc = f.read()
            wordlist.append(word)
            wordfreq.append(doc.count(word))

for a,b in set(zip(wordlist,wordfreq)):
    print(f'{a} : {b}')
