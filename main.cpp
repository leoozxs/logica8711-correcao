#include <iostream>
#include <string>
 
int main(){
   
   int pilha[10];
   int topo = - 1;
   int op;

   std::cout<<"=== PILHA COM MENU ==="<<std::endl;

   while (true){
    std::cout<<"\n1. Empilhar"<<std::endl;
    std::cout<<"2. Desempilhar"<<std::endl;
    std::cout<<"3. Exibir Pilha"<<std::endl;
    std::cout<<"4. Sair"<<std::endl;
    std::cout<<"Escolha: "<<std::endl;

    if(op == 1){
        if(topo < 9){
            int valor;
            std::cout<<"Digite o valor: ";
            std::cin>>valor;
            topo ++;
            pilha[topo];
            std::cout<<"Empilhado"<<std::endl;
        }else{
            std::cout<<"Pilha cheia!"<<std::endl;
        }
    }
    else if(op == 2){
        if (topo >= 0){
            std::cout<<"removido: "<<pilha[topo]<<std::endl;
            topo --;
        }else{
            std::cout<<"Pilha vazia!"<<std::endl;
        }
    }
    else if(op == 3){
        if (topo >= 0){
            std::cout<<"Pilha: ";
            for(int i = 0; i <= topo; i++){
                std::cout<<pilha[i]<<" ";
            }
        }else{
        std::cout<<"Pilha vazia!"<<std::endl;
        }
    }
    else if (op == 4){
        std::cout<<"Saindo..."<<std::endl;
        break;
    }
    
    
   }
   

   return 0;
}