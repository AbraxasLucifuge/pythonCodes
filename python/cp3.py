#Create two modules- addandsub.py and mulanddiv.py
#Inside addandsub module, create two functions such that one function
#will perform addition and the other will perform subtraction. Each
#function will take two arguments and will return the result.
#Inside mulanddiv module, create two functions such that one function
#will perform multiplication and the other will perform division. Each
#function will take two arguments and will return the result.
import cp3m1 as addandsub
import cp3m2 as mulanddiv
print(addandsub.add(4,3))
print(addandsub.sub(6,3))
print(mulanddiv.mul(5,2))
print(int(mulanddiv.div(10,2)))