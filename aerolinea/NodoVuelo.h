#pragma once
#include "Vuelo.h"

class NodoVuelo
{
public:
	NodoVuelo();
	~NodoVuelo();
	Vuelo * getValor();
	void setValor(Vuelo * vuelo);
	NodoVuelo * getSiguiente();
	void setSiguiente(NodoVuelo * siguiente);
private:
	Vuelo * vuelo;
	NodoVuelo * siguiente;
};

