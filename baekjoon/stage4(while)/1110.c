#include <stdio.h>


int main(){
  int a,b,c,d;
  int num,result;
  int count=0;
  scanf("%d", &num);
  result = num;

  while(1){
    a = num / 10;
    b = num % 10;
    c = (a+b)%10;
    d = (b*10) + c;
    num = d;
    count++;
    if(d == result){
      break;
    } 
  }
  printf("%d\n", count);
  return 0;
  
}