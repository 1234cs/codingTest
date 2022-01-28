#include <stdio.h>


int main(){
  int n,t;
  scanf("%d", &n);
  int stdId[24] = {};
  for(int i = 0; i<n;i++){
    scanf("%d", &t);
    stdId[t]= stdId[t] + 1;
  }
  for(int i = 1 ; i<24; i++){
    printf("%d ",stdId[i]);
  }
  
}