n = int(input())
nums = []
ans = 0
for i in range(2):
  nums.append(list(map(int,input().split())))
a = nums[0]
b = nums[1]
a.sort()
b.sort(reverse=True)

for i in range(len(a)):
  ans += a[i] * b[i]

print(ans)
