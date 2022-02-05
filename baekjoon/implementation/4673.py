def selfNum(n):
    N=[int(i) for i in str(n)]
    N.append(int(n))
    return sum(N)

nums = [ selfNum(i+1) for i in range(10000)]
a = [i+1 for i in range(10000)]

for num in nums:
  if(num in a):
    a.remove(num)
for i in a:
  print(i)
    
