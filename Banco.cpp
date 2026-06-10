#include <iostream>
#include <string>




struct Produto{
        int id;
        std::string descricao;
        float preco;
        bool concluido;
};

    Produto produto[50];
    int totalProdutos = 0;

void adicionar(){
        std::cout<<"\n --- Adicionar Produto ---"<<std::endl;

        std::cout<<"ID: ";
        std::cin>>produto[totalProdutos].id;

        std::cin.ignore();
        std::cout<<"Produto: ";
        std::getline(std::cin, produto[totalProdutos].descricao);

        std::cout<<"Preco do produto: ";
        std::cin>>produto[totalProdutos].preco;

        produto[totalProdutos].concluido = false;

        totalProdutos++;
        std::cout<<"\nProduto adicionado!"<<std::endl;
}

void listar(){
        if(totalProdutos == 0){
            std::cout<<"\nNenhum produto!"<<std::endl;
            return;
        }
        std::cout<<"\n--- Produtos ---"<<std::endl;
        for(int i = 0; i < totalProdutos; i++){
            std::string status = produto[i].concluido ? "S" : "N";
            std::cout<<"["<<status<<"]"<<produto[i].id<<" - "<<produto[i].descricao<<" - RS$ "<<produto[i].preco<<std::endl;

    }
}

void deletarProduto() {
    int idDelete;

    std::cout << "\n--- Deletar Produto ---" << std::endl;
    std::cout << "Informe o ID do produto que deseja DELETAR: ";
    std::cin >> idDelete;

    for (int i = 0; i < totalProdutos; i++) {
        if (produto[i].id == idDelete) {

            // Move todos os elementos seguintes uma posição para trás
            for (int j = i; j < totalProdutos - 1; j++) {
                produto[j] = produto[j + 1];
            }

            totalProdutos--;

            std::cout << "Deletado com sucesso!" << std::endl;
            return;
        }
    }

    std::cout << "Produto nao encontrado!" << std::endl;
}


void menu(){
    std::cout<<"\n === Banco Produtos ==="<<std::endl;
    std::cout<<"1. Adicionar"<<std::endl;
    std::cout<<"2. Exibir produtos"<<std::endl;
    std::cout<<"3. Deletar"<<std::endl;
    std::cout<<"4. Sair"<<std::endl;
    std::cout<<"Escolha: "<<std::endl;
}



int main(){

    int op;

    while(true){
        menu();
        std::cin>>op;

        switch (op){
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
            deletarProduto();
            break;
        case 4:
            std::cout<<"Ate logo!!";
            exit(0);
        default:
            system("cls");
            std::cout<<"\nOpcao invalida!"<<std::endl;
            break;
        }
    }

}