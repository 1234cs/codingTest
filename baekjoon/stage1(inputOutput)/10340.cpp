#include <iostream>

int main(){
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  std::cout<< (a+b)%c <<std::endl;
  std::cout<< ((a%c)+(b%c))%c <<std::endl;
  std::cout<< (a*b)%c <<std::endl;
  std::cout<< ((a%c)*(b%c))%c <<std::endl;
}