#include<iostream>
 

int main(){
    
   

    int numeros[5] = {20,80,30,63,70}; // 5 posições

//  EXERCICIO 1 Crie um programa que leia 5 números e exiba-os na tela.
    // std::cout<<"Numeros: "<<std::endl;

    // for(int i = 0; i < 5; i++){
    //     std::cout<<numeros[i]<<std::endl;
    // }








    // EXERCICIO 2 Leia 5 números e calcule a soma total.
    // int somar;
    // for(int i = 0; i < 5; i ++){
    //     somar += numeros[i];
    // }
    // std::cout<<somar<<std::endl;





    //EXERCICIO 3 Leia 5 números e encontre o maior deles.
    // int maior = numeros[0];

    // for(int i = 0; i < 5; i++){
    //     if(numeros[i] >= maior){
    //         maior = numeros[i];
    //     }
    // }
    // std::cout<<maior<<std::endl;





    // EXERCICIO 4 Leia 5 números e encontre o menor deles.

    // int menor = numeros[0];

    // for(int i = 0; i < 5; i++){
    //     if(numeros[0] <= menor ){
    //         numeros[i] = menor;
    //     }
    // }

    // std::cout<<menor<<std::endl;







    //Exercício 5 Leia 5 números, calcule a média e exiba.
    // int total = sizeof(numeros) / sizeof(numeros[0]);
    // int soma = 0;

    // for(int i = 0; i < 5; i++){
    //     soma += numeros[i];
    // }
    // soma = soma / total;
    // std::cout<<soma<<std::endl;

    





    // Exercicio 6 Leia um array com 10 números e exiba quantos elementos tem.

    // int numeros10[10] = {10,20,30,40,50,60,70,83,90,100};

    // int qtdElementos = sizeof(numeros10) / sizeof(numeros10[0]);

    // std::cout<<qtdElementos<<std::endl;

    






    // EXERCICIOS 7 Leia 10 números e exiba apenas os pares.

    // for(int i = 0; i < 5; i++){
    //     if(numeros[i] % 2 == 0){
    //         std::cout<<numeros[i]<<std::endl;
    //     }
    // }






    // EXERCICIO 8 Leia 10 números e exiba apenas os ímpares.

    // for(int i = 0; i < 10; i++){
    //     if(numeros10[i] % 2 != 0){
    //         std::cout<<numeros[i]<<std::endl;
    //     }
    // }







    // EXERCICIO 9 Leia 5 números e exiba-os em ordem inversa.

    // int numeros3[3] = {10,20,30};

    // for(int i = 2; i >= 0; i--){
    //     std::cout<<numeros3[i]<<std::endl;
    // }






    // EXERCICIO 10 Leia 10 números e conte quantas vezes aparece o número 5.

    // int numeross10[10] = {10,25,5,5,5,5,6,5,5,5};
    // int qtd5 = 0;

    // for(int i = 0; i < 10; i++){
    //     if(numeross10[i] == 5){
    //         qtd5 += 1;
    //     }
    // } 
    // std::cout<<qtd5<<std::endl; 
    








    //EXERCICIO 11 Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.
    // int numeroszinhos[5] = {10,20,30,40,50};
    // int buscar;
    
    // std::cout<<"Digite o numero que deseja buscar: ";
    // std::cin>>buscar;

    // for(int i = 0; i < 5; i++){
    //     if(numeroszinhos[i] == buscar){
    //         std::cout<<"Está na posição: "<<i<<std::endl;
    //         return 0;
    //     }
    // }
    // std::cout<<"Numero nao encontrado!"<<std::endl;




    //EXERCICIO 12 Leia 8 números, calcule a média e exiba quais estão acima dela.

    // int a[8] = {1,2,3,4,5,6,9,30};
    // int total = 0;
    // int tamanho = sizeof(a) / sizeof(a[0]);


    // for(int i = 0; i < 8; i++){
    //     total += a[i];
    // }
    // total = total / tamanho;

    // std::cout<<"A media e: "<<total<<std::endl;

    // for(int j = 0; j < 8; j++){
    //     if(a[j] > total){
    //         std::cout<<"Numero que esta dentro do Array e sendo acima da media: "<<a[j]<<std::endl;
    //     }
    // }






    // EXERCICIO 13 Leia 10 números e encontre tanto o maior quanto o menor em um mesmo programa.

    // int a[10] = {10,20,20,20,20,20,20,20,20,80};
    // int maior = a[0];
    // int menor = a[0];

    // for(int i = 0; i < 10; i++){
    //     if(a[i] > maior){
    //         maior = a[i];
    //     }

    //     if(a[i] < menor){
    //         menor = a[i];
    //     }
    // }
    // std::cout<<"O maior numero dentro do array e: "<<maior<<"\nO menor numero do array e: "<<menor<<std::endl;


    // EXERCICIO 14 Leia 10 números e some apenas os números pares.

    // int a[10] = {10,20,20,20,20,20,20,20,20,80};
    // int soma = 0;

    // for(int i = 0; i < 10; i++){
    //     if(a[i] % 2 == 0){
    //         soma += a[i];
    //     }
    // }
    // std::cout<<soma;



    

    //EXERCICIO 15 Leia 10 números e conte quantos são positivos e quantos são negativos.

    int a[10] = {-10,-52,-35,-40,-50,67,83,78,59,17};
    int postivos = 0;
    int negativos = 0;

    for(int i = 0; i < 10; i++){
        if(a[i] > 0){
            postivos += 1;
        }else{
            negativos += 1;
        }
    }
    std::cout<<"O Array tem "<<postivos<<" numeros positivos."<<"\nO Array tem "<<negativos<<" numeros negativos."<<std::endl;
    





    return 0;
}

   