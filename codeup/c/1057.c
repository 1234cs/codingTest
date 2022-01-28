#include <stdio.h>

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  if( a == 0 && b == 0){
    printf("%d\n",1);
  }else if (a*b == 1)
  {
    printf("%d\n",1);
  }else{
    printf("%d\n",0);
  }
  
}