// ListaDuplamenteEncadeada-EDD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

#include "ListaDuplamenteEncadeada.h"

int main()
{
	ListaDE playlist;
	ListaMusica test, test2;

	test.artista = "a";
	test.titulo = "b";

	test2.artista = "AA";
	test2.titulo = "BB";

	inicializarListaDE(playlist);

	inserirInicioDaListaDE(playlist,test);

	inserirFimDaListaDE(playlist,test2);

	cout << "Ready";
	cin.get();
    return 0;
}

