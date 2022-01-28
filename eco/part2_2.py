# 큰 수의 법칙
# 반복문 쓰지 않고 수학적으로 접근


n,m,k = list(map(int,input().split()))
data = list(map(int,input().split()))
ans = 0
mod = m % (k+1)
data.sort()
first = data[n-1]
second = data[n-2]

if mod == 0:
  ans = ((first * k) + second) * (m//(k+1))
elif mod != 0:
  ans = (((first * k) + second) * (m//(k+1))) + (mod * first) 
print(ans)