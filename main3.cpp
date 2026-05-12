// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>



    //VARIAVEIS MODALIDADE
    std::string modalidadeDeEnsino;


   // VARIAVEIS CADASTRO ALUNO
    std::string nomeCompletoAluno;
    std::string cpfAluno;
    std::string rgAluno;
    std::string emailAluno;
    std::string telefoneAluno;
    std::string enderecoNumeroAluno;
    std::string enderecoLogradouroAluno;
    std::string enderecoComplementoAluno;
    std::string enderecoBairroAluno;
    std::string enderecoCidadeAluno;
    std::string enderecoUnidadeFederativaAluno;
    std::string enderecoCepAluno;
    std::string enderecoPaisAluno;
    // VARIAVEIS N/A CADASTRO
    std::string respostaProprioResponsavelSimNao;
    // VARIAVEIS RESPONSAVEL
    std::string nomeCompletoResponsavel;
    std::string cpfResponsavel;
    std::string rgResponsavel; 
    std::string emailResponsavel;
    std::string telefoneResponsavel;
    std::string enderecoLogradouroResponsavel;
    std::string enderecoNumeroResponsavel;
    std::string enderecoComplementoResponsavel;
    std::string enderecoBairroResponsavel;
    std::string enderecoCidadeResponsavel;
    std::string enderecoUnidadeFederativaResponsavel;
    std::string enderecoCepResponsavel;
    std::string enderecoPaisResponsavel;
    
    
    //Variavel N/A
    std::string escolhaCursoInfo;
    std::string matricularSimNao;
    
    
    
void modalidadeEADCursos(){
    std::cout<<"============ Cursos disponíveis na modalidade EAD ============"<<std::endl;
    std::cout<<"Qual curso deseja saber as informações??"<<std::endl;
}
void exibirModalidade(){
    std::cout<<"\n\n=================  PAINEL SENAC  ================="<<std::endl;
    std::cout<<"Boa noite! Qual modalidade de ensino deseja se informar?"<<std::endl;
    std::cout<<"1 - Presencial"<<std::endl;
    std::cout<<"2 - EAD (Em desenvolvimento)"<<std::endl;
    std::getline(std::cin, modalidadeDeEnsino);
    
    
}
void cadastroAlunoeResponsavel(){
        // Cadastro Aluno
        std::cout<<"-----------------    BEM VINDO! --------------------"<<std::endl;
		std::cout<<"=================  CADASTRO SENAC  ================="<<std::endl;
        std::cout<<"Informe o Nome do Aluno: "<<std::endl;
        std::getline(std::cin, nomeCompletoAluno);
        std::cout<<"Informe o CPF do Aluno: "<<std::endl;
        std::getline(std::cin, cpfAluno);
        std::cout<<"Informe o RG do Aluno: "<<std::endl;
        std::getline(std::cin, rgAluno);
        std::cout<<"Informe o e-mail do aluno: "<<std::endl;
        std::getline(std::cin, emailAluno);
        std::cout<<"Informe o telefone do aluno: "<<std::endl;
        std::getline(std::cin, telefoneAluno);
        std::cout<<"Informe o Logradouro: "<<" (Exemplo: Rua das Flores, Av. Paulista)"<<std::endl;
        std::getline(std::cin, enderecoLogradouroAluno);
        std::cout<<"Informe o Número Residencial: "<<std::endl;
        std::getline(std::cin, enderecoNumeroAluno);
        std::cout<<"Informe Complemento: "<<" (Caso não houver, apenas deixe em branco.)"<<std::endl;
        std::getline(std::cin, enderecoComplementoAluno);
        std::cout<<"Informe o Bairro: "<<std::endl;
        std::getline(std::cin, enderecoBairroAluno);
        std::cout<<"Informe a Cidade (Município): "<<" (Exemplo: São Paulo) "<<std::endl;
        std::getline(std::cin, enderecoCidadeAluno);
        std::cout<<"Informe a Unidade Federativa: "<<std::endl;
        std::getline(std::cin, enderecoUnidadeFederativaAluno);
		std::cout<<"Informe o CEP: "<<std::endl;
		std::getline(std::cin, enderecoCepAluno);
		std::cout<<"Insira o Pais: "<<std::endl;
		std::getline(std::cin, enderecoPaisAluno);

        nomeCompletoAluno = nomeCompletoResponsavel;
        cpfAluno = cpfResponsavel;
        rgAluno = rgResponsavel;
        emailAluno = emailResponsavel;
        telefoneAluno = telefoneResponsavel;
        enderecoLogradouroAluno = enderecoLogradouroResponsavel;
        enderecoNumeroAluno = enderecoNumeroResponsavel;
        enderecoComplementoAluno = enderecoComplementoResponsavel;
        enderecoBairroAluno = enderecoBairroResponsavel;
        enderecoCidadeAluno = enderecoCidadeResponsavel;
        enderecoUnidadeFederativaAluno = enderecoUnidadeFederativaResponsavel;
        enderecoCepAluno = enderecoCepResponsavel;
        enderecoPaisAluno = enderecoPaisResponsavel;

        std::cout<<"Você seria seu próprio responsável? 1 - Não  2 - Sim"<<std::endl;
		std::getline(std::cin, respostaProprioResponsavelSimNao);

        if(respostaProprioResponsavelSimNao == "1"){

            nomeCompletoResponsavel = -1;
            cpfResponsavel = -1;
            rgResponsavel = -1; 
            emailResponsavel = -1;
            telefoneResponsavel = -1;
            enderecoLogradouroResponsavel = -1;
            enderecoNumeroResponsavel = -1;
            enderecoComplementoResponsavel = -1;
            enderecoBairroResponsavel = -1;
            enderecoCidadeResponsavel = -1;
            enderecoUnidadeFederativaResponsavel = -1;
            enderecoCepResponsavel = -1;
            enderecoPaisResponsavel = -1;

            std::cout<<"Informe o Nome do Responsável: "<<std::endl;
            std::getline(std::cin, nomeCompletoResponsavel);
            std::cout<<"Informe o CPF do Responsável: "<<std::endl;
            std::getline(std::cin, cpfResponsavel);
            std::cout<<"Informe o RG do Responsável: "<<std::endl;
            std::getline(std::cin, rgResponsavel);
            std::cout<<"Informe o e-mail do Responsável: "<<std::endl;
            std::getline(std::cin, emailResponsavel);
            std::cout<<"Informe o telefone do Responsável: "<<std::endl;
            std::getline(std::cin, telefoneResponsavel);
            std::cout<<"Informe o Logradouro do Responsável: "<<" (Exemplo: Rua das Flores, Av. Paulista)"<<std::endl;
            std::getline(std::cin, enderecoLogradouroResponsavel);
            std::cout<<"Informe o Número Residencial do Responsável: "<<std::endl;
            std::getline(std::cin, enderecoNumeroResponsavel);
            std::cout<<"Informe Complemento do Responsável: "<<" (Caso não houver, apenas deixe em branco.)"<<std::endl;
            std::getline(std::cin, enderecoComplementoResponsavel);
            std::cout<<"Informe o Bairro Responsável: "<<std::endl;
            std::getline(std::cin, enderecoBairroResponsavel);
            std::cout<<"Informe a Cidade (Município): "<<" (Exemplo: São Paulo) "<<std::endl;
            std::getline(std::cin, enderecoCidadeResponsavel);
            std::cout<<"Informe a Unidade Federativa do Responsável: "<<std::endl;
            std::getline(std::cin, enderecoUnidadeFederativaResponsavel);
 			std::cout<<"Informe o CEP do Responsável: "<<std::endl;
			std::getline(std::cin, enderecoCepResponsavel);
			std::cout<<"Insira o Pais do Responsável: "<<std::endl;
			std::getline(std::cin, enderecoPaisResponsavel);
			std::cout<<"Cadastro finalizado!"<<std::endl;
        }
        else{
            std::cout<<"Cadastro Finalizado com sucesso!"<<std::endl;
        }
    }
void infoTecnicoEmDesenvolvimentoDeSistemas(){
        std::cout<<"=================================================="<<std::endl;
        std::cout<<"CURSO: Técnico em Desenvolvimento de Sistemas"<<std::endl;
        std::cout<<"=================================================="<<std::endl;
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
        std::cout<<"\nGostaria de se Matricular? 1 - Sim    2 - Não"<<std::endl;
        std::getline(std::cin, matricularSimNao);
    
    }
void infoTecnicoEmEmfermagem(){
        std::cout<<"=================================================="<<std::endl;
        std::cout<<"CURSO: Técnico em Enfermagem"<<std::endl;
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
        std::cout<<"\nGostaria de se Matricular? 1 - Sim    2 - Não"<<std::endl;
        std::getline(std::cin, matricularSimNao);
    }
void infoTecnicoEmModelagem(){
        std::cout<<"=================================================="<<std::endl;
        std::cout<<"CURSO: Técnico em Modelagem"<<std::endl;
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
        std::cout<<"\nGostaria de se Matricular? 1 - Sim    2 - Não"<<std::endl;
        std::getline(std::cin, matricularSimNao);
        
}
void modalidadePresencialCursos(){
	std::cout<<"============ Cursos disponíveis na modalidade PRESENCIAL ============"<<std::endl;
	std::cout<<"Qual curso deseja saber as informações??"<<std::endl;
	std::cout<<"1 - Técnico em Desenvolvimento de Sistemas"<<std::endl;
	std::cout<<"2 - Enfermagem"<<std::endl;
	std::cout<<"3 - Modelagem"<<std::endl;
	std::getline(std::cin, escolhaCursoInfo);
	
	if(escolhaCursoInfo == "1"){
	  infoTecnicoEmDesenvolvimentoDeSistemas();
	}
	if(escolhaCursoInfo == "2"){
	  infoTecnicoEmEmfermagem();
	}
	if(escolhaCursoInfo == "3"){
	   infoTecnicoEmModelagem(); 
	}
}
int main(){

    cadastroAlunoeResponsavel();
    exibirModalidade();
    // If do Escolha de modalidade PRESENCIAL / EAD
    if(modalidadeDeEnsino == "1"){
        modalidadePresencialCursos();
     } 
    if(modalidadeDeEnsino == "2"){
        modalidadeEADCursos();
    }else{
    }
    

    return 0;
}
 