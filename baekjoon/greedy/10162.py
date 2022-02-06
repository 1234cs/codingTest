sec = int(input())
ctn = 0
ans = []
types = [300,60,10]

if sec%10 != 0:
  print(-1)
else:
  for type in types:
    ctn = sec//type
    ans.append(ctn)
    sec %= type
  for a in ans:
    print(a)

  
