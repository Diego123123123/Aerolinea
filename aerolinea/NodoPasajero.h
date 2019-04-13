#pragma once
#include "Pasajero.h"

class NodoPasajero
{
public:
	NodoPasajero();
	~NodoPasajero();
	Pasajero * getValor();
	void setValor(Pasajero * pasajero);
	NodoPasajero * getSiguiente();
	void setSiguiente(NodoPasajero * siguiente);
private:
	Pasajero * pasajero;
	NodoPasajero * siguiente;
};

