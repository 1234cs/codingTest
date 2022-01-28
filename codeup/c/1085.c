#include <stdio.h>

int main(){
  long long h,b,c,s;
  scanf("%lld %lld %lld %lld", &h,&b,&c,&s);
  long long res = (h*b*c*s);
  
  double result = (h*b*c*s)/(8*1024);
  
  result /= 1024;
  printf("%.1f MB\n", result);
}