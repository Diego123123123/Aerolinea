#pragma once
#include "NodoPaquete.h"
class Paquete;

class ListaPaquetes
{
public:
	~ListaPaquetes();
	void insertarInicio(Paquete * dato);
	ListaPaquetes();

	void ordenar();

	void mostrar();

	void intercambiar(NodoPaquete * a, NodoPaquete * b);

	NodoPaquete * getCabeza();
	Paquete * buscarPaquete(int id);
	void agregarPaqueteAlVuelo();

private:
	NodoPaquete * cabeza;
};

