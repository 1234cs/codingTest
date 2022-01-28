#include <iostream>

int main(){
  int a,i,result;
  result = 0;
  scanf("%d", &a);
  for(i=1;i<=a;i++){
    result = result +i; 
  }
  std::cout<< result << std::endl;
}