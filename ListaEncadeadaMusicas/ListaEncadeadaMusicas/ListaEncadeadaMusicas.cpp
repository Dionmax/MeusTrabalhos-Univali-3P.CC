// ListaEncadeadaMusicas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "string"

using namespace std;

#include "ListaEncadeadaMusica.h"

int main()
{
	Playlist listateste;

	ListaMusicas muisca, musica;

	muisca.artista = "dass";
	muisca.titulo = "dasd";

	musica.artista = "dasdsad";
	musica.titulo = "dasdad";

	inicializar(listateste);

	insirirInicioDaPlaylistEscadeada(listateste, muisca);

	cout << "Quantidade elementos: " << listateste.quantidade << endl;

	imprimirListaEncadeada(listateste);

	insirirFinalDaLista(listateste, musica);

	cout << "Quantidade elementos: " << listateste.quantidade << endl;

	imprimirListaEncadeada(listateste);

	cout << "removendo" << endl;

	removerFimDaLista(listateste);

	cout << "Quantidade elementos: " << listateste.quantidade << endl;

	imprimirListaEncadeada(listateste);

	removerInicioPlaylistEncadeada(listateste);

	cout << "Quantidade elementos: " << listateste.quantidade << endl;

	imprimirListaEncadeada(listateste);

	cin.get();
	return 0;
}

