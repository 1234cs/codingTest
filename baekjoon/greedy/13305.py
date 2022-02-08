n = int(input())
roads = list(map(int,input().split())) 
costs = list(map(int,input().split())) 

m = costs[0]
res = m * roads[0]
for i in range(1,n-1):
  if m > costs[i]:
    m = costs[i]
  res +=  m * roads[i]
print(res)
