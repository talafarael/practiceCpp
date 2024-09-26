// 18.	Вивести таблицю множення 10x10;

#include <iostream>

int main(){
    for(int i=1;i<=10;i++){
         for(int y=1;y<=10;y++){
        std::cout<<i<<"*"<<y<<":"<<i*y<<std::endl;
    }
    }
}