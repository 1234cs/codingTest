#include <stdio.h>

int main(){
  int a;
  int result=1;
  for(int i=0 ; i<3;i++){
    scanf("%d", &a);
    result *= a;
  }
  int num[10] = {0,};
  int index;
  int count;
  while(result>0){
    index = result%10;
    // printf("==================\n");
    // printf("current index : %d\n", index);
    // printf("current result : %d\n", result);    
    num[index]++;
    // printf("current num[%d] : %d\n",index ,num[index]);
    result /= 10;
    count++;
    // printf("current count : %d\n", count);
    // printf("current state : %d\n", result);
  }
  for(int i=0;i<10;i++){
    printf("%d\n", num[i]);
  }

}