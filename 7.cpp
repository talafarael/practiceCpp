#include <iostream>

int main()
{
    int knife=5;
    double priceKnife=2.3;
    int cup=100;
    double priceCup=2.2;
    int money=0;
    double priceMoney=2.2;
    std::cout<<"knife:"<<knife<<std::endl;
    std::cout<<"Price knife:"<<priceKnife<<std::endl;
    std::cout<<"cup:"<<cup<<std::endl;
    std::cout<<"price cup:"<<priceCup<<std::endl;
std::cout<<"money:"<<money<<std::endl;
std::cout<<"money:"<<priceMoney<<std::endl;
std::cout<<"sum"<<cup*priceCup+knife*priceKnife+money*priceMoney<<std::endl;
}