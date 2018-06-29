#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include "Heap.h"

using namespace std;

void teste()
{
	Heap<int> arvoreHeap = Heap<int>();

	arvoreHeap.inserir(1, 21);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(2, 22);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(3, 23);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(4, 24);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(5, 25);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(6, 26);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(7, 27);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(8, 28);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(9, 29);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(10, 30);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(11, 31);
	arvoreHeap.toStringChave();
	arvoreHeap.inserir(12, 32);
	arvoreHeap.toStringChave();

	arvoreHeap.deletarTopo();

	arvoreHeap.toStringChave();
	
	//arvoreHeap.alterarChave(29, 14);

	//arvoreHeap.toStringChave();
}

int main()
{
	srand(time(NULL));

	teste();

	cin.get();

	return 0;
}
