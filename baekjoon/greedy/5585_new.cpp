#include <iostream>

int main(){
  int coin_types[6] = {500,100,50,10,5,1};
  int n, ans = 0;
  std::cin >> n;
  n = 1000 - n;
  
  for(int i=0; i<6 ;i++){
    ans += n/coin_types[i];
    n %= coin_types[i];
  }
  std::cout << ans << std::endl;
}