#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  if( b >= c){
    printf("%d",-1);
    return 0;
  }
  printf("%d", (a/(c-b) + 1));
}