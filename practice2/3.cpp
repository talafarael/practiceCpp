#include <iostream>

int main(){
    int64_t num=8;
    num=num>>1;
    num=~num;
    std::cout<<num;
}