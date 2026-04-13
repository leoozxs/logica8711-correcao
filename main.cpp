#include<iostream>
#include<string>


int main(){

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade < 0){
        std::cout<<"Idade inválida!"<<std::endl;
    }else if(idade <= 2){
        std::cout<<"Voce e um bebe!"<<std::endl;
    }else if(idade <= 12){
        std::cout<<"Voce e uma crianca!"<<std::endl;
    }else if(idade <= 14){
        std::cout<<"Voce e um pre-adolecente!"<<std::endl;
    }else if(idade <= 17){
        std::cout<<"Voce e um adolecente!"<<std::endl;
    }else if(idade >= 18){
        std::cout<<"Voce e um adulto!"<<std::endl;
    }
    
    return 0;
}