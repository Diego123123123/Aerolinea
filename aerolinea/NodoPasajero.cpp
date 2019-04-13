#include "stdafx.h"
#include "NodoPasajero.h"


NodoPasajero::NodoPasajero()
{
}


NodoPasajero::~NodoPasajero()
{
}

Pasajero * NodoPasajero::getValor()
{
	return this->pasajero;
}

void NodoPasajero::setValor(Pasajero * pasajero)
{
	this->pasajero = pasajero;
}

NodoPasajero * NodoPasajero::getSiguiente()
{
	return this->siguiente;
}

void NodoPasajero::setSiguiente(NodoPasajero * siguiente)
{
	this->siguiente = siguiente;
}
