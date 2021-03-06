// TrabalhoSuperMercado-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

#include "Fila.h"

using namespace std;

const int CICLO_TEMPO = 1000;

int a = 1;

template<typename T>
void add_cliente(TFila<Cliente> &caixa)
{
	Cliente novo_cliente;

	novo_cliente.tempo = rand() % 3;

	enfileirar(caixa, novo_cliente);
}

template<typename T>
void atendimento(TFila<Cliente> &caixa)
{
	ElementoF<Cliente> *aux;

	aux = caixa.inicio;

	if (aux != NULL) 
	{
		cout << a << endl;

		a++;

		if (aux->objeto.tempo > 0)
			aux->objeto.tempo--;
		else
			desenfileirar(caixa);
	}	
}

void chegada_clientes(TFila<Cliente> *caixa, int tamanho)
{
	for (int indice = 0; indice < tamanho; indice++)
		for (int indice_2 = 0; indice_2 < 10; indice_2++)
			add_cliente<Cliente>(caixa[indice]);
}

void saida_clientes(TFila<Cliente> *caixa, int tamanho)
{
	for (int contador = 0; contador < CICLO_TEMPO; contador++)
		for (int indice = 0; indice < tamanho; indice++)
			if (caixa[indice].quantidade > 0)
				atendimento<Cliente>(caixa[indice]);
		
}

int fazer_media(TFila<Cliente> *caixa, int tamanho)
{
	ElementoF<Cliente> *aux;

	int media = 0;

	for (int contador = 0; contador < tamanho; contador++)
	{
		aux = caixa[contador].inicio;

		for (int indice = 0; indice < caixa[contador].quantidade; indice++)
			if (aux->proximo != NULL)
			{
				media += aux->objeto.tempo;

				aux = aux->proximo;
			}
	}

	return media / tamanho;
}

void processamento_clientes(TFila<Cliente> *caixa, int tamanho)
{
	chegada_clientes(caixa, tamanho);
	saida_clientes(caixa, tamanho);
	cout << endl << "MEDIA!" << fazer_media(caixa, tamanho) << endl;
}

int main()
{
	srand(time(NULL));

	int numeroClientes = 0;

	cin >> numeroClientes;

	TFila<Cliente> *caixa = new TFila<Cliente>[numeroClientes];

	for (int indice = 0; indice < numeroClientes; indice++)
		inicializarFila(caixa[indice]);

	processamento_clientes(caixa, numeroClientes);

	cin.get();
	cin.get();
	return 0;
}

