#include <stdio.h>

int main(){
  int n;
  int init = 1;
  int ans=0;
  scanf("%d", &n);
  
  while(ans < n){
    ans += init;
    init++;
  }

  printf("%d\n", ans);
}