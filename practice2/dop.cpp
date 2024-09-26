#include <iostream>

int main(){

    int num=5;
    
    int bouquet=0;

    int remainder;
     int arr[5]={1,3,4,5,6};
     int M;
     int useFlower[5];
     std::cout<<"m:";
     std::cin>>M;
     for(int i=0;i<num;i++){
         if(arr[i]>M&&i!=num-1){
            arr[i]=arr[i]-M;
            i--;
            bouquet++;
            useFlower[i]=M;
        }else {
            useFlower[i]=arr[0];}
     }
     std::cout<<"букет"<<bouquet;
       std::cout<<"remaind flower"<<remainder;
for(int i=0;i<num;i++){
    
    std::cout<<arr[i]<<std::endl;
std::cout<<"використані квіти з першого кошику"<<useFlower[i]<<std::endl;}
   
}