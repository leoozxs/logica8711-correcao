#include <iostream>

int main(){
    int jogos;

    std::cout<<"===== Calculador de público ====="<<std::endl;
    std::cout<<"\nQuantos jogos:";
    std::cin>>jogos;

    int somaPublico = 0;

    for(int i = 1; i <= jogos; i++){
        int publico;
        std::cout<<"Publico jogo "<<i<<": ";
        std::cin>>publico;
        somaPublico += publico;
    }
    
    int media = somaPublico / jogos;

    std::cout<<"\n===== RESULTADO ====="<<std::endl;
    std::cout<<"Media de publico: "<<media<<" pessoas"<<std::endl;
    std::cout<<"Total de público: "<<somaPublico<<" pessoas"<<std::endl;

}
