#include <stdio.h>

int main(){
  int n,t;
  int id[23]={};
  scanf("%d", &n);
  for(int i = 0; i<n;i++){
    scanf("%d", &id[i]);
  }
  for(int i = n-1 ; i>=0 ; i--){
    printf("%d ", id[i]);
  }
}