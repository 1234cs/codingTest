// #include <iostream>

// int main(){
//   int a,b;
//   scanf("%d %d", &a,&b);
//   char result = a < b ? '<' : '>';
//   switch (result)
//   {
//   case '<':
//     std::cout<< '<' << std::endl;
//     break;
//   case '>':
//     std::cout<< '>' << std::endl;
//     break;
//   default:
//     std::cout<< "==" << std::endl;
//     break;
//   }
// }

#include <iostream>

int main(){
  int a,b;
  scanf("%d %d", &a,&b);
  if(a<b){
    std::cout<< '<' << std::endl;
  }else if (a>b)
  {
    std::cout<< '>' << std::endl;
  }
  else{
    std::cout<< "==" << std::endl;
  }
  
}