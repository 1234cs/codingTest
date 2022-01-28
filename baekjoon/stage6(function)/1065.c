#include <stdio.h>

int find_num();

int main(){
  find_num(500);

  return 0;
}

int find_num(int n){
  int num[1000]= {0,};
  int a,b,c,d,count = 0; 
  for(int i=1; i<=n;i++){
    if(i<10){
      // all number is han su
      num[i] = 1;
    }else if (i<100){
      // 12 23 34 25 35
      // all number is han su
      num[i] = 1; 
    }else if (i<1000){
      // 123 345 111 999
      a = i/100;
      b = (i/10)%10;
      c = i%10;
      if((b-a) == (c-b)){
        num[i] = 1;
      } 
    }
  }
  for(int i=1;i<=1000;i++){
    if( num[i] ==1){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
};