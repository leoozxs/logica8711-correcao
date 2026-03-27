#include<iostream>
#include<iomanip>

int main(){

    int a = 8;
    //int número inteiro
    float b = 9.6;
    //float número de ponto flutuante ocupa 4 bytes ( aguenta 6-7 algarismos depois do ponto )
    double c = 4.7777777777;
    //double ocupa 8 bytes ( aguenta 15-16 algarismos depois do ponto )

    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;

    std::cout<<std::fixed<<std::setprecision(10)<<c<<std::endl;;
    //configura a precisão para 10 casas decimais


    return 0;
}

