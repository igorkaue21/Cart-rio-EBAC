#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
		{
		char arquivo [40];
		char Cpf [40];
		char Nome [40];
		char Sobrenome [40];
		char Cargo [40];
		
		printf("Digite o CPF a ser Cadastrado: ");
		scanf("%s", Cpf);
		
		strcpy(arquivo, Cpf);
		
		FILE *file; 
		file = fopen(arquivo,"w");
		fprintf(file,Cpf);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o Nome a ser cadastrado: ");
		scanf("%s",Nome);
		
		file = fopen(arquivo, "a");
		fprintf(file,Nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o Sobrenome a Ser Cadastrado: ");
		scanf("%s",Sobrenome);
		
		file = fopen(arquivo, "a");
		fprintf(file,Sobrenome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf ("Digite o Cargo a ser Cadastrado: ");
		scanf ("%s",Cargo);
		
		file = fopen(arquivo,"a");
		fprintf (file,Cargo);
		fclose(file);
		
		system ("pause");
		
		}
		
	int consultar()
		{
		setlocale(LC_ALL, "portuguese");
		char Cpf [40];
		char conteudo [200];
		
		printf("Digite o CPF a ser Consultado: ");
		scanf("%s", Cpf);
		
		FILE *file;
		file = fopen(Cpf, "r");
		
		if (file == NULL)
		{
			printf("CPF n�o cadastrado \n");
		}
		
		while (fgets(conteudo, 200, file) !=NULL)
		{
			printf("\n Essas S�o as Informa��es do Usuario: ");
			printf("%s", conteudo);
			printf ("\n\n");
		}
		system("pause");
		}
	int deletar()
		{
		char Cpf [40];
		
		printf("Digite o CPF do Usuario a ser Deletado: ");
		scanf("%s", Cpf);
		
		remove (Cpf);
		
		FILE *file;
		file = fopen(Cpf, "r");
		
		if (file == NULL)
		{
			printf ("Usuario n�o Cadastrado!\n");
			system ("pause");
		}
		}
	int main()
{
	int opcao=0;
	int laco=1;
	for (laco=1;laco=1;)
	{	
	
	
		system("cls");
	
		setlocale(LC_ALL, "portuguese");
	
		printf ("    ### Cartorio da EBAC ###  \n\n");
		printf ("Escolha a Op��o Desejada do Menu:\n\n");
		printf ("\t1 - Registrar Nomes\n");
		printf ("\t2 - Consultar Nomes\n");
		printf ("\t3 - Deletar Nomes\n\n");
		printf ("Escolha uma Opc�o: ");

		scanf("%d", &opcao);

		system("cls");
	
			switch (opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			consultar();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf ("A Op��o Escolhida n�o Existe no Momento Volte e Escolha outra\n\n");
			system ("pause");
			break;	
		}
	}
}	

