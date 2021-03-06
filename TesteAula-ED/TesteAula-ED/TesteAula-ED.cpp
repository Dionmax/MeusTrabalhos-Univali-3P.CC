// TesteAula-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "string"

using namespace std;

#include "ListaEstatica.h"

int main()
{
	ListaDeCartas jogadorUm, jogadorDois;

	inicializarListaDeCartas(jogadorUm);
	inicializarListaDeCartas(jogadorDois);

	Baralho CartaA, CartaB, CartaC, CartaD;

	CartaA.naipeCartas = OUROS;
	CartaB.naipeCartas = PAUS;
	CartaC.naipeCartas = COPAS;
	CartaD.naipeCartas = ESPADAS;

	CartaA.numeroCartas = 1;
	CartaB.numeroCartas = 2;
	CartaC.numeroCartas = 3;
	CartaD.numeroCartas = 4;

	insirirInicioListaEstatica(jogadorUm, CartaA);
	insirirFimListaDeCartas(jogadorUm,CartaB);

	imprimirListaDeCartas(jogadorUm);

	cin.get();
	return 0;
}

