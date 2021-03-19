def display_words(f):
    for i in f.readlines():
        for t in i.split():
            if(len(t)<4):
                print(t)
with open('abc.txt') as f:
    display_words(f)
        