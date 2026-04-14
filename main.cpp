#include<iostream>
#include<string>

//Atividade, algortimo Nome, Altura, Idade, Infantil, Adolecente, Adulto. = Imprimir tudo

int main(){

    std::string nome;
    float altura;
    int idade;

    std::cout<<"Boa noite! Qual seu nome? "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual sua altura? "<<std::endl;
    std::cin>>altura;

    std::cout<<"Qual sua idade? "<<std::endl;
    std::cin>>idade;

    if(idade <= 0){
        std::cout<<"Idade inválida."<<std::endl;
    }else if (idade <= 10){
        std::cout<<"Boa noite! "<<nome<<"."<<std::endl;
        std::cout<<"Sua idade = "<<idade<<" anos."<<std::endl;
        std::cout<<"Voce se enquadra na classificacao 'Infantil'."<<std::endl;
        std::cout<<"Sua altura = "<<altura<<"m."<<std::endl;
    }else if (idade <= 18){
        std::cout<<"Boa noite! "<<nome<<"."<<std::endl;
        std::cout<<"Sua idade = "<<idade<<" anos."<<std::endl;
        std::cout<<"Voce se enquadra na classificacao 'Adolescente'."<<std::endl;
        std::cout<<"Sua altura = "<<altura<<"m."<<std::endl;
    }else if(idade <= 60){
        std::cout<<"Boa noite! "<<nome<<"."<<std::endl;
        std::cout<<"Sua idade = "<<idade<<" anos."<<std::endl;
        std::cout<<"Voce se enquadra na classificacao 'Adulto'."<<std::endl;
        std::cout<<"Sua altura = "<<altura<<"m."<<std::endl;
    }else if(idade >= 61){
        std::cout<<"Boa noite! "<<nome<<"."<<std::endl;
        std::cout<<"Sua idade = "<<idade<<" anos."<<std::endl;
        std::cout<<"Voce se enquadra na classificacao 'Idoso'."<<std::endl;
        std::cout<<"Sua altura = "<<altura<<"m."<<std::endl;
    }

    return 0;
}