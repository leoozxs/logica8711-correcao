#include <iostream>
#include<iomanip>


int main(){

    int num;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>num;


    if(num % 2 == 0){
        std::cout<<"Par"<<std::endl;
    }
    else{
        std::cout<<"Impar"<<std::endl;
    }

    return 0;
}
 