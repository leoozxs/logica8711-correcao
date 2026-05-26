#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>


void infoModelagem(){

    int op;

        do{
        std::cout<<"\n==================================================="<<std::endl;
        std::cout<<"========== CURSO: Técnico em Modelagem ==========="<<std::endl;
        std::cout<<"=================================================="<<std::endl;
        std::cout<<"\nValor Total:"<<std::endl;
        std::cout<<"R$ 14.844,79"<<std::endl;
        std::cout<<"\nParcelamento:"<<std::endl;
        std::cout<<"Até 28x"<<std::endl;
        std::cout<<"\nDocentes:"<<std::endl;
        std::cout<<"- Natalia"<<std::endl;
        std::cout<<"- Ramon"<<std::endl;
        std::cout<<"\nHorários:"<<std::endl;
        std::cout<<"- Segunda, quarta e sexta"<<std::endl;
        std::cout<<"- Das 19h às 22h"<<std::endl;
        std::cout<<"\nou"<<std::endl;
        std::cout<<"\n- Terça e sexta"<<std::endl;
        std::cout<<"- Das 19h às 22h"<<std::endl;
        std::cout<<"\nCarga Horária:"<<std::endl;
        std::cout<<"800 horas"<<std::endl;
        std::cout<<"\nGostaria de saber as possíveis formas de formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
        std::cin>>op;

            switch(op){

            case 1:
            std::cout<<"Em desenvolvimento"<<std::endl;
            exit(0);

            case 2:
            system("cls");
            return;

            default:
            std::cout<<"Opção inválida!"<<std::endl;
        }
    }while(true);
}
void infoEnfermagem(){

    int op;

        do{
        std::cout<<"\n==================================================="<<std::endl;
        std::cout<<"========== CURSO: Técnico em Enfermagem =========="<<std::endl;
        std::cout<<"=================================================="<<std::endl;
        std::cout<<"\nValor Total:"<<std::endl;
        std::cout<<"R$ 15.278,00"<<std::endl;
        std::cout<<"\nParcelamento:"<<std::endl;
        std::cout<<"Até 40x de aproximadamente R$ 371,00"<<std::endl;
        std::cout<<"\nDocentes:"<<std::endl;
        std::cout<<"- Carol"<<std::endl;
        std::cout<<"- Thamise"<<std::endl;
        std::cout<<"\nHorários:"<<std::endl;
        std::cout<<"- Segunda a sexta"<<std::endl;
        std::cout<<"- Das 19h às 22h"<<std::endl;
        std::cout<<"\nou"<<std::endl;
        std::cout<<"\n- Segunda a sexta"<<std::endl;
        std::cout<<"- Das 09h às 12h"<<std::endl;
        std::cout<<"\nCarga Horária:"<<std::endl;
        std::cout<<"1.600 horas"<<std::endl;
        std::cout<<"\nGostaria de saber as possíveis formas de formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
        std::cin>>op;

        switch(op){

            case 1:
            std::cout<<"Em desenvolvimento"<<std::endl;
            exit(0);

            case 2:
            system("cls");
            return;

            default:
            std::cout<<"Opção inválida!"<<std::endl;
        }
    }while(true);
}
void infoTDS(){
    
    int op;
        do{
        std::cout<<"\n======================================================"<<std::endl;
        std::cout<<"=== CURSO: Técnico em Desenvolvimento de Sistemas ==="<<std::endl;
        std::cout<<"====================================================="<<std::endl;
        std::cout<<"\nValor Total:"<<std::endl;
        std::cout<<"R$ 14.405,49"<<std::endl;
        std::cout<<"\nParcelamento:"<<std::endl;
        std::cout<<"Até 30x de R$ 493,51"<<std::endl;
        std::cout<<"\nDocentes:"<<std::endl;
        std::cout<<"- Eduardo"<<std::endl;
        std::cout<<"\nHorários:"<<std::endl;
        std::cout<<"- Segunda a sexta"<<std::endl;
        std::cout<<"- Das 19h às 22h"<<std::endl;
        std::cout<<"\nCarga Horária:"<<std::endl;
        std::cout<<"1.216 horas"<<std::endl;
        std::cout<<"\nGostaria de saber as possíveis formas de formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
        std::cin>>op;

        switch(op){

            case 1:
            std::cout<<"Em desenvolvimento"<<std::endl;
            exit(0);

            case 2:
            system("cls");
            return;

            default:
            std::cout<<"Opção inválida!"<<std::endl;
        }
    }while(true);
}
void cadastroAluno(){

}
void cursosEAD(){

}
void cursosPresenciais(){

    int op;

    do{
    std::cout<<"============ Cursos disponíveis na modalidade PRESENCIAL ============"<<std::endl;
	std::cout<<"Qual curso deseja saber as informações??"<<std::endl;
	std::cout<<"1 - Técnico em Desenvolvimento de Sistemas"<<std::endl;
	std::cout<<"2 - Enfermagem"<<std::endl;
	std::cout<<"3 - Modelagem"<<std::endl;
    std::cout<<"4 - Voltar"<<std::endl;
    std::cout<<"5 - Sair"<<std::endl;
    std::cin>>op;

    switch(op){
        case 1:
        infoTDS();
        break;
        
        case 2:
        infoEnfermagem();
        break;

        case 3:
        infoModelagem();
        break;

        case 4:
        system("cls");
        return;

        case 5:
        std::cout<<"\nSistema Finalizado!!"<<std::endl;
        exit(0);
        
        default:
        std::cout<<"Opção Inválida!!"<<std::endl;
    }

    }while(true);
}
void menuPrincipal(){

    int op;

    do{
        std::cout<<"\n========= PAINEL SENAC ========="<<std::endl;
        std::cout<<"1 - Cursos Presencias "<<std::endl;
        std::cout<<"2 - Cursos EAD"<<std::endl;
        std::cout<<"3 - Cadastro Aluno"<<std::endl;
        std::cout<<"4 - Sair"<<std::endl;
        std::cin>>op;

        switch(op){

            case 1:
            cursosPresenciais();
            break;

            case 2:
            cursosEAD();
            break;

            case 3:
            cadastroAluno();
            break;

            case 4:
            std::cout<<"\nSistema Finalizado!!"<<std::endl;
            exit(0);

            default:
            std::cout<<"\nOpção inválida."<<std::endl;
        }
    }while(true);
}
 



int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    

    menuPrincipal();

    return 0;
}