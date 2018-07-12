count=0
j=0
b=raw_input().lower()
c=raw_input().lower()
if b==c:
    print "no"
else:
    for i in b:
        if i==c[j]:
            j+=1
        else:
            j+=1
            count+=1
            if count>1:
                break
    if count==1:
        print "yes"
    else:
        print "no"
