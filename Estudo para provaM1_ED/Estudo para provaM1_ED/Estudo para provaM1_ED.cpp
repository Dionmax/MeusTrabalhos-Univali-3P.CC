// Estudo para provaM1_ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MergesortEstaticoVetor.h"

int main()
{
	int vetor[10] = {9,3,2,1,4,5,8,0,7,6};

	MergeSort(vetor,10);

	for (int indice = 0; indice < 10; indice++)
		cout << vetor[indice] << endl;
	
	cin.get();
    return 0;
}

