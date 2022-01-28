#include <stdio.h>

int main(){
  int g;
  scanf("%d", &g);
  if( 90 <= g && g<=100){
    printf("A");
  }else if (70 <= g && g<=89)
  {
    printf("B");
  }else if (40 <= g && g<=69)
  {
    printf("C");
  }else if (0 <= g && g<=39)
  {
    printf("D");
  };
}