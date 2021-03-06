// ArvoreB(Esboco).cpp : define o ponto de entrada para o aplicativo do console.
// Desafio: Faça uma função que uma página de uma raiz de uma arvore B e retorne quantos registros impares existem nas paginas folhas.

#include "stdafx.h"
#include <iostream>
#include <string>

#include "ArvoreB.h"

using namespace std;

//template<typename T>
int imparesQtd(TPagina *pagina)
{
	int qtd = 0;

	if (pagina == NULL)
		return 0;

	if (pagina->filhos[0] == NULL)
	{
		for (int indice = 0; indice < pagina->quantidade; indice++)
			if (pagina->registro[indice] % 2 == 1)
				qtd++;

		return qtd;
	}

	for (int indice = 0; indice < pagina->quantidade + 1; indice++)
		qtd += imparesQtd(pagina->filhos[indice]);

	return qtd;
}

void teste()
{
	TPagina arvoreB = TPagina();

	arvoreB.registro[4, 3, 4];
	arvoreB.filhos[3, 4, 5, 7, 9];
	arvoreB.quantidade = 8;

	cout << imparesQtd(&arvoreB);
}

int main()
{
	teste();

	cin.get();
	return 0;
}
