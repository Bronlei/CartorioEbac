#include <stdio.h>//biblioteca de comunica��o com o usuario
#include <stdlib.h>//biblioteca de aloca��o de espa�o de memoria
#include <locale.h>//biblioteca de aloca��es de texto por regi�o
#include <string.h>//biblioteca responsavel por cuidar das string


int registro()//fun��o responsavel por cadastrar usuario
{
    //Inicio cria��o de variaves/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];   
    
    printf("Digite o CPF a ser cadastrado: ");//coletando informa��o do usuario
    scanf("%s", cpf);//%s refere-se a string
    
    strcpy(arquivo, cpf);//Responsavel por copiar os valores das string
    
    FILE *file;//cria o arquivo
    file = fopen(arquivo,"w");//cria o arquvio e o "w" significa escrever
    fprintf(file,"CPF:%s",cpf);//salva o valor da variavel
    fclose(file); //fecha o arquvio
	   
    file = fopen(arquivo, "a"); //abre o arquivo e o "a" abre o arquivo para adicionar dados
    fprintf(file,"\n");
    fclose(file);
    
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,"Nome:%s",nome);
    fclose(file);
    
    
    file = fopen(arquivo, "a");
    fprintf(file,"\n");
    fclose(file);
    
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,"Sobrenome:%s",sobrenome);
    fclose(file);
   
    
    
    file = fopen(arquivo, "a");
    fprintf(file,"\n");
    fclose(file);
    
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,"Cargo:%s",cargo);
    fclose(file);
   
    
    
    system("pause");
    
	}


int consulta()
{
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado:");
    scanf("%s",cpf);//referese a string
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("N�o foi possivel abrir o arquivo, n�o localizado.\n	");
    	
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as infroma��es do usuario:");
		printf("%s", conteudo);
		printf("\n\n");
	}
			
	    system("pause");
}
    
    
    

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
}

int main()
{
	int opcao=0;//Definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	   system("cls");
	
	
	
	  setlocale(LC_ALL, "Portuguese_Brazil");//definindo a linguagem
	
	
	    printf("\t Cartorio da EBAC \n\n");
    	printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1- Registrar nomes\n");
	    printf("\t2- Consultar nomes\n");
 	    printf("\t3- Deletar nomes\n\n");
 	    printf("\t4- Sair do sistema\n");
	    printf("Op��o: ");//fim do menu
	
	    scanf("%d", &opcao);//armazenando a escolha do usuario
	
	    system("cls");//resposavel por limpar
	    
	    switch(opcao)//inicio da sele��o 
	    {
	    	case 1:
	    	registro();
			break;
			
			case 2:	
			consulta();
    	    break;
    	    
    	    case 3:
    	    deletar();
    	    break;
    	    
    	    case 4:
    	    printf("obrigado por utilizar o sistema\n");
    	    return 0;
    	    break;
    	    
    	    default:
    	     printf("Essa op��o n�o est� disponivel!\n");
    	    system("pause");
    	    break;
    	    	
		}//fim da sele��o
	
	    
	    }




        }	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

    



