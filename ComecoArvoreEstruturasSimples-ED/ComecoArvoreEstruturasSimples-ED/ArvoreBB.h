#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template<typename T>
struct TNodoABB
{
	int chave;

	T objeto;

	TNodoABB *menor,
		*maior;
};

template<typename T>
struct TABB
{
	TNodoABB<T> *raiz;
	int quantidade;
};

template<typename T>
void inicializarABB(TABB<T> & arvore)
{
	arvore.raiz = NULL;
	arvore.quantidade = 0;
}

//template<typename T>
//bool inserirABB_it(TABB<T> & arvore, int novoChave, T obj)
//{
//	bool verificacao = false;
//
//	TNodoABB<T> *novo = new TNodoABB<T>;
//
//	TNodoABB<T> *aux_raiz;
//
//	novo->objeto = obj;
//	novo->maior = NULL;
//	novo->menor = NULL;
//	novo->chave = novoChave;
//
//	if (novo != NULL)
//		verificacao = true;
//
//	if (arvore.quantidade == 0)
//		arvore.raiz = novo;
//	else
//	{
//		aux_raiz = arvore.raiz;
//
//		while ((aux_raiz->menor != NULL && aux_raiz->maior != NULL)) // corrigir esta linha
//		{
//			if (aux_raiz->chave < novoChave)
//				if (aux_raiz->menor == NULL)
//					aux_raiz = aux_raiz->menor;
//				else
//					aux_raiz->menor = novo;
//			else
//				if (aux_raiz->maior == NULL)
//					aux_raiz = aux_raiz->maior;
//				else
//					aux_raiz->maior = novo;
//		}
//	}
//
//	arvore.quantidade++;
//
//	aux_raiz = NULL;
//
//	delete aux_raiz;
//
//	return verificacao;
//}

template<typename T>
bool inserir_recursivo(TNodoABB<T> *&nodo, int novoChave, T obj)
{
	bool verificacao = true;

	TNodoABB<T> *aux_nodo;

	TNodoABB<T> *novo = new TNodoABB<T>;

	if (novo == NULL)
		return false;

	novo->objeto = obj;
	novo->maior = novo->menor = NULL;
	novo->chave = novoChave;

	aux_nodo = nodo;

	if (nodo == NULL)
		nodo = novo;
	else
	{
		if (aux_nodo->chave == novoChave)
			return false;
		else
		{
			if (novoChave > aux_nodo->chave)
				inserir_recursivo(aux_nodo->maior, novoChave, obj);
			else
				inserir_recursivo(aux_nodo->menor, novoChave, obj);
		}
	}

	//arvore.quantidade++;

	aux_nodo = NULL;

	delete aux_nodo;

	return verificacao;
}

template<typename T>
void busca(TABB<T> arvore, int chave)
{
	TNodoABB<T> * nodoAtual = arvore.raiz;

	while (nodoAtual != NULL)
	{
		if (nodoAtual->chave == chave)
			return nodoAtual->objeto;

		if (chave > nodoAtual->chave)
			nodoAtual = nodoAtual->menor;
		else
			nodoAtual = nodoAtual->menor;
	}

	return NULL;
}

template<typename T>
void busca_recursiva(TNodoABB<T> * nodo, int chave)
{
	if (nodo == NULL)
		return NULL;
	if (nodo->chave == chave)
		return nodo->objeto;
	else
	{
		if (chave > nodo->chave)
			return busca_recursiva(nodo->maior, chave);
		else
			return busca_recursiva(nodo->menor, chave);
	}
}

template<typename T>
int buscaChave_dois(TNodoABB<T> * nodo, T dado)
{
	if (dado != NULL && nodo != NULL)
	{
		if (nodo->objeto == dado)
			return nodo->chave;

		return max(buscaChave(nodo->menor, dado), buscaChave(nodo->maior, dado));
	}

	return -1;
}

template<typename T>
int buscaChave(TNodoABB<T> *& nodo, T dado)
{
	if (dado != NULL && nodo != NULL)
	{
		if (nodo->objeto == dado)
			return nodo->chave;

		int resultado = buscaChave(nodo->menor, dado);

		if (resultado == 1)
			resultado = buscaChave(nodo->maior, dado);

		return resultado;
	}

	return -1;
}

template<typename T>
void remocaoArvoreSimples(TNodoABB<T> *&nodo, int chave)
{
	TNodoABB<T> *mm = nodo->menor, *pai = NULL;

	if (mm == NULL)
	{
		TNodoABB<T> *rem = nodo;
		delete rem;
		nodo = nodo->maior;
		return;
	}

	while (mm->maior != NULL)
	{
		pai = mm;
		mm = mm->maior;
	}

	mm->maior = nodo->maior;

	if (pai != NULL)
	{
		pai->maior = mm->menor;
		mm->menor = nodo->menor;
	}
	delete nodo;
	nodo = mm;
}

template<typename T>
bool encontrarRemove(TNodoABB<T> *&nodo, int chave)
{
	if (nodo == NULL)
		return false;

	if (chave == nodo->chave) {
		remocaoArvoreSimples(nodo, chave);
		return true;
	}

	if (chave > nodo->chave)
		encontrarRemove(nodo->maior, chave);
	else
		encontrarRemove(nodo->menor, chave);
}

template<typename T>
void infixa(TNodoABB<T> * nodo)
{
	if (nodo != NULL)
	{
		infixa(nodo->menor);

		cout << "Nodo " << nodo->chave << " com valor " << nodo->objeto << endl;

		infixa(nodo->maior);
	}
}

