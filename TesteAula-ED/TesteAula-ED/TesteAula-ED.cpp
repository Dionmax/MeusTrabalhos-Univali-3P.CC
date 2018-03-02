// TesteAula-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "string"

using namespace std;

#include "ListaEstatica.h"

void inicializar(ListaDeCartas &lista)
{
	lista.quantidadeDeCartas = 1;
}

bool verificarCasasLivres(ListaDeCartas lista)
{
	bool livre = true;

	if (lista.quantidadeDeCartas == TAMANHO_MAXIMO)
		livre = false;

	return livre;
}

bool insirirFimListaDeCartas(ListaDeCartas &lista, Baralho cartas)
{
	bool espacosLivres;

	espacosLivres = verificarCasasLivres(lista);

	if (espacosLivres)
	{
		lista.cartas[lista.quantidadeDeCartas] = cartas;
		lista.quantidadeDeCartas++;
	}

	return espacosLivres;
}

bool insirirInicioListaEstatica(ListaDeCartas &lista, Baralho cartas)
{
	bool espacosLivres;

	espacosLivres = verificarCasasLivres(lista);

	if (espacosLivres)
	{
		for (int indice = lista.quantidadeDeCartas; indice > 0; indice++)
			lista.cartas[indice] = lista.cartas[indice - 1];

		lista.cartas[0] = cartas;
		lista.quantidadeDeCartas++;
	}
		
	return espacosLivres;
}

int main()
{
	return 0;
}

