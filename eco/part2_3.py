# 각 행에서 최소 값을 리스트에 각각 담아주고
# 그 리스트에서 최소 값을 구해주면 됨.

n,m = list(map(int,input().split()))
ans = []
for i in range(n):
  data = list(map(int,input().split()))
  ans.append(min(data))
print(max(ans))

  

