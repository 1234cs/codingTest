
n = int(input())
ans = 0
coin_types = [500,100,50,10]

for coin in coin_types:
  ans += n//coin
  n = n % coin
print(ans)

