// EstudosParaProvaM1_ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int TAMANHO = 5;

void organizarListas(int lista_um[TAMANHO], int lista_dois[TAMANHO])
{

	int diferente = 0,
		lista_tres[TAMANHO+1];

	for (int indice_um = 0; indice_um < TAMANHO; indice_um++)
	{
		for (int indice_dois = 0; indice_dois < TAMANHO; indice_dois++)
		{
			if (lista_um[indice_um] != lista_dois[indice_dois])
				diferente++;


		}
	}

}

int main()
{
	int lista_um[] = { 0,1,3,8,9 },
		lista_dois[] = { 1,2,3,4,5 };

	cin.get();
	return 0;
}

