# def test(n):
#   ans=0
#   for i in range(1,n+1):
#       ans += i 
#   return ans

#(1,2,3) 3 => 6~6+3
#(1,2,3,4) 4 => 10~10+4
#(1,2,3,4,5) 5 => test(5) ~ test(5)+5
#(1,2,3,4,5,6) 6 => test(6) ~ test(6)+6  

# s = int(input())
# for i in range(1,100):
#   if  s <= (test(i)+i) and test(i) <= s:
#     print(i)
#     break;

s = int(input())
n=1
while ((n+1)*n)/2 <=s:
  n+=1
print(n-1)

