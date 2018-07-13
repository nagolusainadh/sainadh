r=int(input())
rev=0
while(r>0):
    dig=r%10
    rev=rev*10+dig
    r=r//10
print(rev)
