r=int(input())
temp=r
rev=0
while(r>0):
    dig=r%10
    rev=rev*10+dig
    r=r//10
if(temp==rev):
    print("yes")
else:
    print("no")