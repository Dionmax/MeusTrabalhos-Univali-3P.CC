// TrabalhaListas-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//#include "ListaEstatica.h"
#include "ListaEncadeada.h"
//#include "ListaDuplamenteEncadeada.h"

/*
void testeListaDE()
{
	ListaDE <int>listaTeste;

	inicializarListaDE(listaTeste);

	insirirFinalDaListaDE(listaTeste, 300);

	insirirComecoListaDE(listaTeste, 302);

	insirirFinalDaListaDE(listaTeste, 301);

	insirirFinalDaListaDE(listaTeste, 305);

	insirirComecoListaDE(listaTeste, 303);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);

	insirirPosicaoListaDE(listaTeste, 400, 2);

	insirirPosicaoListaDE(listaTeste, 304, 4);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);

	bubblesortListaDE(listaTeste);

	cout << "Quantidade Obejtos: ooo " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);

	removerInicioDaListaDE(listaTeste);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);

	removerFinalListaDE(listaTeste);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);

	removerFinalListaDE(listaTeste);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);

	removerPosicaoListaDE(listaTeste, 1);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaDE(listaTeste);
}
*/


void testeEncadeada()
{
	ListaObjetos <int>listaTeste;

	inicializarListaEncadeada(listaTeste);

	insirirComecoListaEncadeada(listaTeste, 202);

	insirirFimListaEncadeada(listaTeste, 203);

	insirirComecoListaEncadeada(listaTeste, 201);

	insirirFimListaEncadeada(listaTeste, 200);

	insirirPosicaoListaEncadeada(listaTeste, 111, 2);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaEncadeada(listaTeste);

	bubblesortListaEncadeada(listaTeste);

	//mergeSort(listaTeste); --. sdad

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaEncadeada(listaTeste);

	removerComecoListaEncadeada(listaTeste);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaEncadeada(listaTeste);

	removerFinalListaEncadeada(listaTeste);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaEncadeada(listaTeste);

	removerPosicaoListaEncadeada(listaTeste, 1);

	cout << "Quantidade Obejtos: " << listaTeste.quantidade << endl;

	imprimirListaEncadeada(listaTeste);
}

/*
void testeEstatica()
{
	ListaObjetos <int>listaTeste;

	int teste = 102;

	inicializarListaEstatica(listaTeste);

	insirirFimDaListaEstatica(listaTeste, 100);

	insirirComecoListaEstatica(listaTeste, teste);

	insirirFimDaListaEstatica(listaTeste, 103);

	insirirComecoListaEstatica(listaTeste, 101);

	insirirPosicaoListaEstatica(listaTeste,99,2);

	insirirPosicaoListaEstatica(listaTeste, 97, 4);

	imprimirListaEstatica(listaTeste);

	cout << endl << "Organizada" << endl;

	//bubblesorteListaEstatica(listaTeste);

	mergeSort(listaTeste, listaTeste.quantidadeObjetos);

	imprimirListaEstatica(listaTeste);

	cout << "Quantidade objetos: " << listaTeste.quantidadeObjetos << endl;

	cout << "----------" << endl;

	removerComecoListaEstatica(listaTeste);

	imprimirListaEstatica(listaTeste);

	cout << "Quantidade objetos: " << listaTeste.quantidadeObjetos << endl;

	cout << "----------" << endl;

	removerFimListaEstatica(listaTeste);

	imprimirListaEstatica(listaTeste);

	cout << "Quantidade objetos: " << listaTeste.quantidadeObjetos << endl;

	cout << "----------" << endl;

	removerPosicaoListaEstatica(listaTeste, 2);

	imprimirListaEstatica(listaTeste);

	cout << "Quantidade objetos: " << listaTeste.quantidadeObjetos << endl;
}
*/

int main()
{
	//testeEstatica();
	testeEncadeada();
	//testeListaDE();

	cin.get();
	return 0;
}

