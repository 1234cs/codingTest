#include <iostream>

int main(){

  int grade;
  scanf("%d", &grade);
  int num = grade/10;
  switch (num)
  {
  case 10: case 9:
    std::cout << 'A' << std::endl;
    break;
  case 8:
    std::cout << 'B' << std::endl;
    break;
  case 7:
    std::cout << 'C' << std::endl;
    break;
  case 6:
    std::cout << 'D' << std::endl;
    break;
  default:
    std::cout << 'F' << std::endl;
    break;
  }

}
  
  