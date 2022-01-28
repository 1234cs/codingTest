#include <iostream>

int main(){
    char bArray[3];
    int a,b,i;
    scanf("%d", &a);
    scanf("%d", &b);
    sprintf(bArray,"%d",b);

    for(i=2;i>=0;i--){
        std::cout<< ( (bArray[i] -'0') * a) << std::endl;
    }
        std::cout<< (a*b) << std::endl; 

}
