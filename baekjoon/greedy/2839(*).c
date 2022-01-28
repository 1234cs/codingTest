#include <stdio.h>

// 배수로 떨어지지 않지만 dp 를 쓰지않고 수학적으로 만든 알고리즘.

int main(){
  int n;
  int ans=0;
  scanf("%d", &n);
  while(n>=0){
    if(n%5 == 0){
      ans += n/5;
      return printf("%d\n", ans);
    }
    n -=3;
    ans++;
  }
  return printf("%d\n", -1);
}