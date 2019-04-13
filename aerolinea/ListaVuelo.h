#pragma once
#include "NodoVuelo.h"
#include "ListaPasajero.h"
class Vuelo;

class ListaVuelo
{
public:
	~ListaVuelo();
	void insertarInicio(Vuelo * dato);

	void ordenar();

	void mostrar();

	void intercambiar(NodoVuelo * a, NodoVuelo * b);

	NodoVuelo * getCabeza();
	static ListaVuelo& getInstance();
	Vuelo * buscar(int id);
	void mostrarVueloPasajeros();
	void mostrarVueloPaquetes();
	Vuelo * buscarVueloPasajero(int id);
	Vuelo * buscarVueloCarga(int id);


private:
	NodoVuelo * cabeza;
	ListaVuelo();
};

