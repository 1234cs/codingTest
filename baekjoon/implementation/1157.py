str = input().upper()
unique = list(set(str))

cnt=0
cntL = []

for x in unique:
  cnt = str.count(x)
  cntL.append(cnt)

if cntL.count(max(cntL)) > 1:
  print('?')
else:
  ans = unique[cntL.index(max(cntL))]
  print(ans)