#include <stdio.h>

int main(){
  int arr[9], index, max=0;
  for(int i=0;i<9;i++){
    scanf("%d", &arr[i]);
    if(arr[i]>max){
      max = arr[i];
      index = i;
    }
    // printf("current max value : %d\n", max);
    // printf("current max index : %d\n", index+1);
  }
  printf("%d\n%d\n", max, index+1);
}

