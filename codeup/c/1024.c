#include <stdio.h>

int main(){
  char ex[30];
  scanf("%s", ex );
  for(int i=0; ex[i]!='\0' ;i++){
    printf("\'%c\'\n",ex[i]);
  }
}