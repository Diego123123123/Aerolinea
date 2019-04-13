#pragma once
#include "NodoPasajero.h"
class NodoPaquete;
class Pasajero;

class ListaPasajero
{
public:
	~ListaPasajero();
	ListaPasajero();
	void insertarInicio(Pasajero * dato);

	void ordenar();

	void mostrar();

	void intercambiar(NodoPasajero * a, NodoPasajero * b);

	NodoPasajero * getCabeza();
	Pasajero * buscarPasajero(string ci);
	void agregarPasajeroAVuelo();

private:
	NodoPasajero * cabeza;
};

