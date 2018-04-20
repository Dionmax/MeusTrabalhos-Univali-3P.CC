// TrabalhoSuperMercado-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

#include "Fila.h"

using namespace std;

const int CICLO_TEMPO = 10000;

int a = 0;

template<typename T>
void add_cliente(TFila<Cliente> &caixa)
{
	Cliente novo_cliente;

	novo_cliente.tempo = rand()% 3;

	enfileirar(caixa, novo_cliente);
}

template<typename T>
void atendimento(TFila<Cliente> &caixa)
{
	ElementoF<Cliente> *aux;

	aux = caixa.fim;

	cout << aux->objeto.tempo << endl;

	if (aux->objeto.tempo > 0)
		aux->objeto.tempo--;
	else
		desenfileirar(caixa);
}

void chegada_clientes(TFila<Cliente> *caixa, int tamanho)
{
	for (int indice = 0; indice < tamanho; indice++)
		for (int indice_2 = 0; indice_2 < 10; indice_2++)
			add_cliente<Cliente>(caixa[indice]);
}

void saida_clientes(TFila<Cliente> *caixa)
{
	for (int indice = 0; indice < CICLO_TEMPO; indice++)
	{
		if (caixa[indice].quantidade > 0)
			atendimento<Cliente>(caixa[indice]);
	}
		
}

void processamento_clientes(TFila<Cliente> &caixa, int tamanho)
{
	chegada_clientes(&caixa, tamanho);
	saida_clientes(&caixa);
}

int main()
{
	srand(time(NULL));

	int numeroClientes = 0;

	cin >> numeroClientes;

	TFila<Cliente> *caixa = new TFila<Cliente>[numeroClientes];

	for (int indice = 0; indice < numeroClientes; indice++)
		inicializarFila(caixa[indice]);

	processamento_clientes(*caixa, numeroClientes);

	cin.get();
	cin.get();
	return 0;
}

