// ComecoArvoreEstruturasSimples-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "ArvoreBB.h"

using namespace std;


int main()
{
	TABB<int> nova_arvore;

	inicializarABB(nova_arvore);

	insirirABB_it(nova_arvore, 15, 34);

	insirir_funcional(nova_arvore, 13, 33);

	cin.get();
	cin.get();
    return 0;
}

