#include <iostream>

int main(){
  int a,b;
  scanf("%d %d", &a,&b);
  
  if(a>0){
    if(b>0){
      std::cout << '1' <<std::endl;
    }else
    {
      std::cout << '4' <<std::endl;
    }
  }else
  {
    if(b>0){
      std::cout << '2' <<std::endl;
    }else
    {
      std::cout << '3' <<std::endl;
    }
  }
  
}