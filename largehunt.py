def l(n):
  map(int,n)
  n.sort()
  n.reverse()
  return ''.join(map(str,n))
 
r=int(input())
nu=input().split()
res=l(nu)
print (res)
