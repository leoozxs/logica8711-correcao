#include <iostream>
#include <string>

 struct Produto{
        int id;
        std::string descricao;
        bool concluido;
};

    Produto produto[50];
    int totalProdutos = 0;

void adicionar(){
        std::cout<<"\n --- Adicionar Tarefas ---"<<std::endl;

        std::cout<<"ID: ";
        std::cin>>produto[totalProdutos].id;

        std::cin.ignore();
        std::cout<<"Descricao: ";
        std::getline(std::cin, produto[totalProdutos].descricao);

        produto[totalProdutos].concluido = false;

        totalProdutos++;
        std::cout<<"Tarefa adicionada!"<<std::endl;
}

void listar(){
        if(totalProdutos == 0){
            std::cout<<"\nNenhuma tarefa!"<<std::endl;
            return;
        }
        std::cout<<"\n--- Tarefas ---"<<std::endl;
        for(int i = 0; i < totalProdutos; i++){
            std::string status = produto[i].concluido ? "S" : "N";
            std::cout<<"["<<status<<"]"<<produto[i].id<<" - "<<produto[i].descricao<<std::endl;

    }
}


void marcarConcluida(){
    int idBuscado;
    std::cout<<"\nID da tarefa: ";
    std::cin>>idBuscado;

    for(int i = 0; i < totalProdutos; i++){
        if(produto[i].id == idBuscado){
            produto[i].concluido = true;
            std::cout<<"Marcada como concluida!"<<std::endl;
            return;
        }
    }
    std::cout<<"Tarefa não encontrada!"<<std::endl;
}


void menu(){
    std::cout<<"\n === Todo LIST ==="<<std::endl;
    std::cout<<"1. Adicionar"<<std::endl;
    std::cout<<"2. Listar"<<std::endl;
    std::cout<<"3. Marcar concluida"<<std::endl;
    std::cout<<"4. Sair"<<std::endl;
    std::cout<<"Escolha: "<<std::endl;
}



int main(){

    int op;

    while(true){
        menu();
        std::cin>>op;

        switch (op)
        {
        case 1:
            system("cls");
            adicionar();
            break;
        case 2:
            system("cls");
            listar();
            break;
        case 3:
            system("cls");
            marcarConcluida();
            break;
        case 4:
            system("cls");
            std::cout<<"Ate logo!"<<std::endl;
            exit(0);
        default:
            system("cls");
            std::cout<<"\nOpcao invalida!"<<std::endl;
            
            break;
        }
    }

}