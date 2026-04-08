#include<iostream>
#include<string>

int main(){

    int valor;
    float porcentagem; 
    float resultado;

    std::cout<<"Informe o valor (Inteiro): "<<std::endl;
    std::cin>>valor;

    std::cout<<"Infrome a porcentagem que deseja descobrir do valor informado"<<std::endl;
    std::cin>>porcentagem;

    resultado = valor * (porcentagem / 100.0);
    
    std::cout<<"Valor informado: "<<valor<<std::endl;
    std::cout<<"Porcentagem desejada: "<<porcentagem<<"%"<<std::endl;
    std::cout<<"O Resultado e: "<<resultado<<std::endl;




    return 0;
}