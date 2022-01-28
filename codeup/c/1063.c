#include <stdio.h>

int main(){
  int a,b,ans;
  scanf("%d %d",&a,&b);
  ans = a < b ? b : a;
  printf("%d\n", ans);
}