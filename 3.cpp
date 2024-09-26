#include <iostream>
int sum100(int i);
int main()
{
  for(int i=0;i<10;i++){
      std::cout<<i+1<<std::endl;
      
  }
  int sum2=sum100(0);
std::cout<<sum2<<std::endl;
  int a=0;
  int sum=0;
  while(a!=100){
        a++;
    sum+=a;
}
  std::cout<<sum<<std::endl;
  int whileDo=0;
  do{  whileDo+=2;
      std::cout<<whileDo<<std::endl;
    
      
  }while(whileDo!=18);
  
}
int sum100(int i){
    if(i==100){
      return 100;}
    return sum100(++i)+i;
}