n = int(input())
ctn=0
ans=0

for i in range(1,n+1):
  data = input()
  ctn=0
  ans=0
  for a in data:
    
    if(a == 'X'):
      ctn = 0
    else:
      ctn += 1
      ans += ctn
    
  print(ans)
  