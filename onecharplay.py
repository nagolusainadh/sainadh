count=0
j=0
a=raw_input().lower()
c=raw_input().lower()
if a==c:
    print "no"
else:
    for i in a:
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
