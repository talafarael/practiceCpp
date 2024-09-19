#include <iostream>
struct Employee{
        double a;
        double b;
        void sum2(){
    std::cout<<(a+b)*2;
  };
  double sum(){
    return a+b;
  };
  void sum3(){
    std::cout<<sum();
  };
    };
int main()
{
    
Employee bob;
std::cin>>bob.a;
std::cin>>bob.b;
bob.sum3();
    return 0;
 
}