n,k = map(int,input().split())
coin_types = []
ans = 0
for i in range(n):
  coin_types.append(int(input()))
coin_types.reverse()
for coin in coin_types:
  ans += k//coin
  k %= coin
print(ans)