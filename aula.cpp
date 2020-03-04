#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <list>

using namespace std;

struct aluno_t {
	char nome[50];
	int idade;
};

int main ()
{
	list<aluno_t> lalunos;
	aluno_t aluno;

	scanf("%s", aluno.nome);
	printf("%s \n", aluno.nome);
	
	return 0;
};
