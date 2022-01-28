#include <stdio.h>

int main(){
  int a;
RELOAD:
  scanf("%d",&a);
  if(a==0){
    return 0;
  }else{
    printf("%d\n",a);
    goto RELOAD; 
  };
}