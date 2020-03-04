#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno_t {
	char nome[50], email[50];
	int idade;
};

int main () 
{
	int i, verificador, p;
	aluno_t alunos[10];

	for (i=0; i<10; i++) {
		printf("Informe o nome do aluno: ");
		scanf("%s", alunos[i].nome);
		printf("informe a idade do estudante: ");
		scanf("%i", &alunos[i].idade);
		printf("informe o email: ");
		scanf("%s", alunos[i].email);
		printf("Digite 1 para sair: ");
		scanf("%i", &verificador);
		if (verificador == 1) {
			for (p=i; p>=0; p--) {
				printf("Aluno %s, Idade %i, Email %s \n", alunos[p].nome, alunos[p].idade, alunos[p].email);			
			}
			i = 10;		
		}
		
	}
	
	return 0;
};
