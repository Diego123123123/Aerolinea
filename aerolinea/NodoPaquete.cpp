#include "stdafx.h"
#include "NodoPaquete.h"


NodoPaquete::NodoPaquete()
{
}


NodoPaquete::~NodoPaquete()
{
}

Paquete* NodoPaquete::getValor()
{
	return this->paquete;
}

void NodoPaquete::setValor(Paquete* paquete)
{
	this->paquete = paquete;
}

NodoPaquete* NodoPaquete::getSiguiente()
{
	return this->siguiente;
}

void NodoPaquete::setSiguiente(NodoPaquete* siguiente)
{
	this->siguiente = siguiente;
}
