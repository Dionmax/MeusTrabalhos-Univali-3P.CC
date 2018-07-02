// ComecoAulaFilas-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "Fila.h"

using namespace std;


int main()
{
	TFila<int> fila;

	inicializarFila(fila);

	enfileirar(fila, 12);
	enfileirar(fila, 13);

	desenfileirar(fila);
	desenfileirar(fila);
	desenfileirar(fila);


	cin.get();
    return 0;
}

