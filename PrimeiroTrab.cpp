#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <list>

using namespace std;

struct produto_t {
	char nome[50];
    int codigo;
    double preco;
    int estoque;
};


list<produto_t> lproduto();
void inserir_produto ()
{
    list<produto_t> lproduto();
    produto_t produto;
    printf("Informe o nome do produto: ");
    scanf("%s", produto.nome);
    printf("Informe o codigo do produto: ");
    scanf("%i", &produto.codigo);
    printf("Informe o preco do produto: ");
    scanf("%lf", &produto.preco);
    printf("Informe o quantidade em estoque do produto: ");
    scanf("%i", &produto.estoque);
    //falta inserir no array
}

void listar_produto ()
{
    //falta listar
}

int main ()
{
	inserir_produto();
    listar_produto();

    return 0; 
};
