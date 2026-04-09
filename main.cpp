#include<iostream>
#include<string>


int main(){

std::string user;
std::string senha;

std::cout<<"Digite seu usuário de acesso: "<<std::endl;
std::cin>>senha;

std::cout<<"Digite sua senha: "<<std::endl;
std::cin>>senha;

if(senha == "leoo"){
    std::cout<<"O usuario "<<user<<" esta logado com sucesso!!"<<std::endl;
}else{
    std::cout<<"Usuario ou senha invalidos!!"<<std::endl;
}

}