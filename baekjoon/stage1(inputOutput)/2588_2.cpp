#include <iostream>

int main(){
  int a,b;

  scanf("%d %d", &a,&b);
  int num1 = (b/100);
  int num2 = (b%100)/10;
  int num3 = (b%100)%10;
  std::cout<< a*num3 <<std::endl;
  std::cout<< a*num2 <<std::endl;
  std::cout<< a*num1 <<std::endl;
  std::cout<< a*b <<std::endl;
}