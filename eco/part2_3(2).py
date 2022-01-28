# 이중 반복문 이용


n,m = list(map(int,input().split()))
ans = 0
for i in range(n):
  data = list(map(int,input().split()))
  
  min_val = 10001
  for i in data:
    min_val = min(min_val,i)
  ans = max(ans,min_val)
print(ans)

