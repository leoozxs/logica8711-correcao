#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

void cadastroAluno(){

}
void cursosEAD(){

}
void cursosPresenciais(){

}
void menuPrincipal(){

    std::string opcao;

    do{
        std::cout<<"\n========= PAINEL SENAC ========="<<std::endl;
        std::cout<<"1 - Cursos Presencias "<<std::endl;
        std::cout<<"2 - Cursos EAD"<<std::endl;
        std::cout<<"3 - Cadastro Aluno"<<std::endl;
        std::cout<<"4 - Voltar"<<std::endl;
        std::getline(std::cin, opcao);

        switch(opcao[0]){

            case '1':
            cursosPresenciais();
            return;

            case '2':
            cursosEAD();
            return;

            case '3':
            cadastroAluno();
            return;

            case '4':
            std::cout<<"\nSistema Finalizado!!"<<std::endl;
            return;

            default:
            std::cout<<"Opção inválida."<<std::endl;
        }
    }while(true);
}




int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    menuPrincipal();

    return 0;
}