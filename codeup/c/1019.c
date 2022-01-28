#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d.%d.%d", &a,&b,&c);
  printf("%004d.%02d.%02d\n", a,b,c);
}