f = 1
while f:
    try:
        t = int(input())
        print("Entered value", t)
        f = 0
    except ValueError:
        print("try again")

