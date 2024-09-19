#include <iostream>

int main()
{
int num1;
int num2;
int num3;
num1= rand() % 100 + 1;
num2=num1+3;
num3=num2+num1;

    std::cout<<num1<<std::endl; std::cout<<num2<<std::endl; std::cout<<num3<<std::endl;
}