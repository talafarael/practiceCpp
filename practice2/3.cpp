#include <iostream>

int main(){
    int64_t num=8;
    num=num>>4;
    num=~num;
    std::cout<<num;
}