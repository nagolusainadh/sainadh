r=int(input("Enter number: "))
rev=0
while(r>0):
    dig=n%10
    rev=rev*10+dig
    r=r//10
print("Reverse of the number:",rev)
