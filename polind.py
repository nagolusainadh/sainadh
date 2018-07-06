r=int(input())
a=list(map(int,str(r)))
b=list(map(lambda x:x**3,a))
c=sum(b)
if(c==r):
    print("yes")
else:
    print("no")
