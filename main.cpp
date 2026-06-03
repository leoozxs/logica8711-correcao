#include <iostream>
#include <string>

struct Aluno{
    std::string nome;
    float nota1;
    float nota2;
};

float calcularMediaAluno(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}

int main(){
    
    Aluno aluno = {"Paulo", 8.0, 9.5};

    float media =  calcularMediaAluno(aluno);

    std::cout<< aluno.nome<<" - Media: "<<media<<std::endl;

    return 0;
}
