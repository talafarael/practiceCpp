#include <iostream>

int main(){
    int Num[3];
    int max=10;
   for(int i=0;i<=2;i++){
    std::cout<<"enter num"<<i<<":";
    std::cin>>Num[i];
   }
     for(int i=0;i<=2;i++){
        if(Num[i]>max){
            max=Num[i];
        }

     }
     std::cout<<max;
}