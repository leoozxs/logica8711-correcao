#include <iostream>
#include <vector>
 
int main(){
 
    std::vector<int>numeros;

    std::cout<<"===== Soma e retorna ====="<<std::endl;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    int soma = 0;

    for(int i = 0; i < 4; i++){
        soma += numeros[i];
    }
    std::cout<<"[ ";
    for (int n : numeros) {
    std::cout << n << " ";
    }
    std::cout<<"]";
    std::cout<<"\n"<<soma<<std::endl;
    


    return 0;
}