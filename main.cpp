#include <iostream>
#include <string>
#include <cctype>

bool ehPalindromo(std:: string s){
    int inicio = 0;
    int fim = s.length() - 1;

    while(inicio < fim){
        if(s[inicio] != s [fim]){
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}



int main(){

    std::string palindromoInserido;

    std::cout<<"Insira o palindromo"<<std::endl;
    std::cin>>palindromoInserido;

    std::cout<<palindromoInserido<<std::endl;

    std::cout<<ehPalindromo(palindromoInserido)<<std::endl;


    return 0;
}