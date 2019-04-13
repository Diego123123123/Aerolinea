#include "stdafx.h"
#include "ListaPasajero.h"
#include <iostream>
#include "Vuelo.h"
#include "ListaVuelo.h"
#include "VueloPasajeros.h"


ListaPasajero::ListaPasajero()
{
}


ListaPasajero::~ListaPasajero()
{
}

void ListaPasajero::insertarInicio(Pasajero* dato)
{
	if (this->cabeza == NULL)
	{
		this->cabeza = new NodoPasajero();
		this->cabeza->setValor(dato);
	}
	else
	{
		NodoPasajero * temp = new NodoPasajero();
		temp->setValor(dato);
		temp->setSiguiente(this->cabeza);
		this->cabeza = temp;
	}
	this->ordenar();
}

void ListaPasajero::ordenar()
{
	int intercambiado, i;
	NodoPasajero * ptr;
	NodoPasajero * ptraux = NULL;
	if (this->cabeza == NULL)
		return;

	do
	{
		intercambiado = 0;
		ptr = this->cabeza;

		while (ptr->getSiguiente() != ptraux)
		{
			if (ptr->getValor()->getCi() > ptr->getSiguiente()->getValor()->getCi())
			{
				intercambiar(ptr, ptr->getSiguiente());
				intercambiado = 1;
			}
			ptr = ptr->getSiguiente();
		}
		ptraux = ptr;
	} while (intercambiado);
}

void ListaPasajero::mostrar()
{
	NodoPasajero *temp = this->cabeza;
	while (temp != NULL)
	{
		temp->getValor()->mostrar();
		temp = temp->getSiguiente();
	}
}

void ListaPasajero::intercambiar(NodoPasajero* a, NodoPasajero* b)
{
	Pasajero * temp = a->getValor();
	a->setValor(b->getValor());
	b->setValor(temp);
}

NodoPasajero* ListaPasajero::getCabeza()
{
	return this->cabeza;
}


Pasajero* ListaPasajero::buscarPasajero(string ci)
{
	NodoPasajero *temp = this->cabeza;
	while (temp != NULL)
	{
		if (temp->getValor()->getCi() == ci)
		{
			return temp->getValor();
		}
		temp = temp->getSiguiente();
	}
	return NULL;
}

void ListaPasajero::agregarPasajeroAVuelo()
{
	string ci;
	int vuelo;
	this->mostrar();
	cout << "INGRESE EL CI DEL PASAJERO : ";
	cin >> ci;
	Pasajero * ps = this->buscarPasajero(ci);
	if (ps == NULL)
	{
		cout << "pasajero no encontrado";
			return;
	}
	ListaVuelo::getInstance().mostrarVueloPasajeros();
	cout << "INGRESE EL ID DEL VUELO : ";
	cin >> vuelo;
	VueloPasajeros * vuelo1 = (VueloPasajeros *) ListaVuelo::getInstance().buscarVueloPasajero(vuelo);
	if (vuelo1 == NULL)
	{
		cout << "vuelo no encontrado";
		return;
	}
	vuelo1->agregarPasajeroAVuelo(ps);
	
}



