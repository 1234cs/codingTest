#include <stdio.h>

int main(){
  int space[19][19]={};
  int n;
  int x,y;
  scanf("%d", &n);
  for(int i = 0; i<n; i++){
    scanf("%d %d", &x,&y);
    space[y-1][x-1]=1;
  }
  for(int i = 0; i<19;i++){
    for(int j = 0 ; j<19; j++){
      printf("%d ", space[j][i]);
    }
    printf("\n");
  }
}