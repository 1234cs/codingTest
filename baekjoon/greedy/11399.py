n = int(input())
times = list(map(int,input().split()))
times.sort()
ans = 0
for i in range(len(times)):
  for time in times:
    ans += time
  del times[len(times)-1]

print(ans)