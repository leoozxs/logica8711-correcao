#include <iostream>
#include <vector>
 
int main(){
 
    std::vector<int>numeros;
 
    std::cout<<"Contar ocorrências: "<<std::endl;
 
    numeros.push_back(100);
    numeros.push_back(200);
    numeros.push_back(300);
    numeros.push_back(400);

    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    int buscado = 300;
    int posicao = -1;

    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == buscado){
            posicao = i;
            break;
        }
    }
    if(posicao != -1){
        std::cout<<"Numero "<<buscado<<" encontrado na posiçao "<<posicao<<std::endl;
    }else{
        std::cout<<"Numero não encontrado"<<std::endl;
    }

    return 0;
}
 