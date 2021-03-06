// PontosParaProvaPilhas-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "PilhaProva.h"

using namespace std;


bool verificarIgualdade(char obj1, char obj2)
{
	return (obj1 == obj2);
}

int main()
{
	string problema = "((())))";

	Pilha<char> listaProva;

	int auxInt = 0;

	inicializarPilha(listaProva);

	for (int indice = 0; indice < problema.size(); indice++)
	{
		if ('{' == problema[indice] || '[' == problema[indice] || '(' == problema[indice])
		push(listaProva, problema[indice]);

		if ('}' == problema[indice] || ']' == problema[indice] || ')' == problema[indice])
			auxInt++;
		
		if (listaProva.topo != NULL)
		{
			if ('}' == problema[indice] ||']' == problema[indice] ||')' == problema[indice])
			{
				if (listaProva.topo->objeto == '{' || listaProva.topo->objeto == '[' || listaProva.topo->objeto == '(')
				{
					pop(listaProva);
					auxInt--;
				}
			}
		}
	}

	if (listaProva.quantidade == 0 && auxInt == 0)
		cout << "OK";
	else
		cout << "Erro (Faltou!)" << endl;

	/*push(listaProva, '{');
	push(listaProva, ']');
	push(listaProva, ']');*/

	imprimirPilha(listaProva);

	cin.get();
    return 0;
}

