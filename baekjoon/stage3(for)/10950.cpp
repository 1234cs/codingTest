#include <iostream>

int main(){
  int t ;
  scanf("%d",&t);
  
  for(;t;t--){
    int a,b;
    scanf("%d %d", &a,&b);
    std::cout<< a+b << std::endl;
  }
}