#include <iostream>


void tabuada(int numero, int multiplicador){
    if (multiplicador == 0){
        return;
    }

    tabuada(numero, multiplicador -1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;

}


int main(){

    int numero;
    int multiplicador;

    std::cout<<"Digite o numero inteiro: "<<std::endl;
    std::cin>>numero;

    std::cout<<"Digite o multiplicador: "<<std::endl;
    std::cin>>multiplicador;

    tabuada(numero, multiplicador);


    

    return 0;
}