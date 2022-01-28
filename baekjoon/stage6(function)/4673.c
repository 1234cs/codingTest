#include <stdio.h>

int find_num();

int main(){
  find_num();
}

int find_num(){
  int num[10000]={0,};
  int res=0;
  
  for(int i=1;i<10001;i++){
    if(i<10){
      res = i+i;
      num[res] = 1;
    }
    else if(i<100){
      //12
      res = i + (i/10) + (i%10);
      num[res] = 1;
    }
    else if (i<1000)
    {
      //123
      res = i + (i/100) + ((i/10)%10) + (i%10);
      num[res] = 1;
    }else if (i<10000)
    {
      //1234
      res = i + (i/1000) + ((i/100)%10) + ((i/10)%10) + i%10;
      num[res] = 1;
    }
    
  }

  for(int i = 1; i<10001;i++){
      if(num[i] != 1){
        printf("%d\n", i);
      }
    }
  return 0;
}