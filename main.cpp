#include<iostream>

int main(){

    int num1, num2, soma, subt, mult;
    float div;
    int op;

    std::cout<<"Digite o valor para o numero 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para o numero 2: "<<std::endl;
    std::cin>>num2;

    std::cout<<"\n-------- Escolha a operacao --------"<<std::endl;
    std::cout<<"1 - Soma"<<std::endl;
    std::cout<<"2 - Subrtracao"<<std::endl;
    std::cout<<"3 - Multiplicacao"<<std::endl;
    std::cout<<"4 - Divisao"<<std::endl;
    std::cin>>op;

    switch(op){
        case 1:
        soma = num1 + num2;
        std::cout<<"O resultado da soma e = "<<soma<<std::endl;
        break;
        case 2:
        subt = num1 - num2;
        std::cout<<"O resultado da subtracao e = "<<subt<<std::endl;
        break;
        case 3:
        mult = num1 * num2;
        std::cout<<"O resultado da multiplicacao e = "<<mult<<std::endl;
        case 4:
        break;
        div = num1 / num2;
        std::cout<<"O resultado da divisao e = "<<div<<std::endl;
        break;
        default:
        std::cout<<"Voce nao digitou um valor valido!"<<std::endl;
        
    }

    return 0;
    }