#include "stdafx.h"
#include "NodoVuelo.h"


NodoVuelo::NodoVuelo()
{
}


NodoVuelo::~NodoVuelo()
{
}

Vuelo* NodoVuelo::getValor()
{
	return this->vuelo;
}

void NodoVuelo::setValor(Vuelo* vuelo)
{
	this->vuelo = vuelo;
}

NodoVuelo* NodoVuelo::getSiguiente()
{
	return this->siguiente;
}

void NodoVuelo::setSiguiente(NodoVuelo* siguiente)
{
	this->siguiente = siguiente;
}
