n = int(input())
# 5의 배수인가

def test(n):
  ans = 0
  while n >= 0:
    if n%5 == 0:
      ans += n//5
      return print(ans)
    n -= 3
    ans += 1
  print(-1)
test(n)