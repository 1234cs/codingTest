// 4의 배수 &!100의 배수
// 400의 배수

#include <iostream>

int main(){
  int year;
  scanf("%d", &year);
  
  if(year%400 == 0){
    std::cout << '1' << std::endl;
  }else if( (year%100 !=0) && (year%4 == 0) ){
    std::cout << '1' << std::endl;
  }
  else{
    std::cout << '0' << std::endl;
  }

}