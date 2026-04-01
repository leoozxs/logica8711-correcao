#include<iostream>
#include<string>

int main(){

    //      ATIVIDADE 

    int idadeAtual;
    int anoAtual = 2026;
    std::string primerionome;
    std::string segundonome;

    std::cout<<" Boa noite! Qual seu primeiro nome? "<<std::endl;
    std::cin>>primerionome;
    std::cout<<"Qual seu sobrenome? (Informe apenas o ultimo)"<<std::endl;
    std::cin>>segundonome;
    std::cout<<" Qual sua idade? "<<std::endl;
    std::cin>>idadeAtual;
    std::cout<<" Boa noite! "<<primerionome<<" "<<segundonome<<"!"<<" Voce nasceu no ano de "<<(anoAtual - idadeAtual)<<"."<<std::endl;


    return 0;
}