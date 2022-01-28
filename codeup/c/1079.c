#include <stdio.h>

int main(){
  char a;
RELOAD:
  scanf("%c", &a);
  if(a=='q'){
    printf("%c",a);
    return 0;
  }else{
    printf("%c",a);
    goto RELOAD;
  }
}