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

	inicializarListaDE(playlist);

	cout << "Ready";
	cin.get();
    return 0;
}

