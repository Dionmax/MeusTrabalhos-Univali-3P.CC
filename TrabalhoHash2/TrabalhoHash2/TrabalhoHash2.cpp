// TrabalhoHash2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <time.h>

#include "ListaEncadeada.h"
#include "BB_THEA.h"
#include "BB_THLE.h"

const int TAMANHO = 1000;

using namespace std;

void gravar(string th, string op, int ocupacao, int instruções)
{
	ofstream Arq("SaidaEA.csv", ofstream::app);

	Arq << th << " , " << op << " , " << ocupacao << " , " << instruções << " , " << endl;
}


void ListaSimples()
{
	THEA<int> lista;

	inicializarListaSimples(lista);

	int contador = 1;
	int numeroInsercaoAux = 1;

	for (int indice = 0; indice < TAMANHO * 2; indice++)
	{
		int chave = rand() % 32000 + 1;

		cout << contador << endl;

		inserirNaListaSimples(lista, chave, numeroInsercaoAux, numeroInsercaoAux);

		if (contador == 90 || contador == 240 || contador == 740 || contador == 990 || contador == 1990)
		{
			//int array_chaves[10];

			for (int K = 0; K < 10; K++)
			{
				int chave = rand() % 32000 + 1;

				//array_chaves[K] = chave;

				int instrucao = 1;

				inserirNaListaSimples(lista, chave, instrucao, instrucao);

				gravar("Tabela Aberta", "Inserir", (indice + 11) / 10, instrucao);
			}

			for (int J = 0; J < 10; J++)
			{
				int chave = rand() % 32000 + 1;

				int instrucao = 1;

				pesquisarListaSimples(lista, chave, instrucao);

				gravar("Tabela Aberta", "Pesquisar", (indice + 11) / 10, instrucao);
			}

			indice += 10;
			contador += 10;
		}

		numeroInsercaoAux++;

		contador++;
	}
}


void ListaComposta()
{
	THEC<int> lista;

	inicializarListaComposta(lista);

	int contador = 1;
	int numeroInsercaoAux = 1;

	for (int indice = 0; indice < TAMANHO * 2; indice++)
	{
		int chave = rand() % 32000 + 1;

		cout << contador << endl;

		inserirListaComposta(lista, chave, numeroInsercaoAux);

		if (contador == 90 || contador == 240 || contador == 740 || contador == 990 || contador == 1990 || contador == 2290
			|| contador == 2600 || contador == 3000 || contador == 3240 || contador == 3600 || contador == 3990 || contador == 4000
			|| contador == 4300 || contador == 4500 || contador == 4740 || contador == 4990)
		{
			int array_chaves[10];

			for (int K = 0; K < 10; K++)
			{
				int chave = rand() % 32000 + 1;

				array_chaves[K] = chave;

				int instrucao = 1;

				inserirListaComposta(lista, chave, instrucao);

				gravar("Tabela Com Lista E.", "Inserir", (indice + 11) / 10, instrucao);
			}

			for (int J = 0; J < 10; J++)
			{
				int instrucao = 1;

				pesquisarListaComposta(lista, array_chaves[J], instrucao);

				gravar("Tabela Com Lista E.", "Pesquisar", (indice + 11) / 10, instrucao);
			}

			indice += 10;
			contador += 10;
		}

		numeroInsercaoAux++;

		contador++;
	}
}

int main()
{
	srand(time(NULL));

	ListaSimples();
	ListaComposta();

	cin.get();
	return 0;
}

