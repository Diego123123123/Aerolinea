#include "stdafx.h"
#include "ListaVuelo.h"
#include <iostream>


ListaVuelo::ListaVuelo()
{
}


ListaVuelo::~ListaVuelo()
{
}

void ListaVuelo::insertarInicio(Vuelo* dato)
{
	if (this->cabeza == NULL)
	{
		this->cabeza = new NodoVuelo();
		this->cabeza->setValor(dato);
	}
	else
	{
		NodoVuelo * temp = new NodoVuelo();
		temp->setValor(dato);
		temp->setSiguiente(this->cabeza);
		this->cabeza = temp;
	}
	this->ordenar();
}

void ListaVuelo::ordenar()
{
	int intercambiado, i;
	NodoVuelo * ptr;
	NodoVuelo * ptraux = NULL;
	if (this->cabeza == NULL)
		return;

	do
	{
		intercambiado = 0;
		ptr = this->cabeza;

		while (ptr->getSiguiente() != ptraux)
		{
			if (ptr->getValor()->getFecha() > ptr->getSiguiente()->getValor()->getFecha() || (ptr->getValor()->getFecha() == ptr->getSiguiente()->getValor()->getFecha() && ptr->getValor()->getHora() > ptr->getSiguiente()->getValor()->getHora()))
			{
				intercambiar(ptr, ptr->getSiguiente());
				intercambiado = 1;
			}
			ptr = ptr->getSiguiente();
		}
		ptraux = ptr;
	} while (intercambiado);
}

void ListaVuelo::mostrar()
{
	NodoVuelo *temp = this->cabeza;
	int i = 0;
	while (temp != NULL)
	{
		cout << "ID DE VUELO : " << i << endl;
		temp->getValor()->mostrar();
		cout << "=======================" << endl;
		temp = temp->getSiguiente();
		i++;
	}
}

void ListaVuelo::intercambiar(NodoVuelo* a, NodoVuelo* b)
{
	Vuelo * temp = a->getValor();
	a->setValor(b->getValor());
	b->setValor(temp);
}

NodoVuelo* ListaVuelo::getCabeza()
{
	return this->cabeza;
}

ListaVuelo & ListaVuelo::getInstance()
{
	static ListaVuelo listaDeVuelos;
	return listaDeVuelos;
}

Vuelo* ListaVuelo::buscar(int id)
{
	NodoVuelo *temp = this->cabeza;
	int i = 0;
	while (temp != NULL)
	{
		if (i == id)
		{
			return temp->getValor();
		}
		temp = temp->getSiguiente();
		i++;
	}
	return NULL;
}

void ListaVuelo::mostrarVueloPasajeros()
{
	NodoVuelo *temp = this->cabeza;
	int i = 0;
	while (temp != NULL)
	{
		if (temp->getValor()->identificador == 1)
		{
			cout << "ID DE VUELO : " << i << endl;
			temp->getValor()->mostrar();
			cout << "=======================" << endl;
			i++;
		}
		temp = temp->getSiguiente();
	}
}

void ListaVuelo::mostrarVueloPaquetes()
{
	NodoVuelo *temp = this->cabeza;
	int i = 0;
	while (temp != NULL)
	{
		if (temp->getValor()->identificador == 2)
		{
			cout << "ID DE VUELO : " << i << endl;
			temp->getValor()->mostrar();
			cout << "=======================" << endl;
			i++;
		}
		temp = temp->getSiguiente();
	}
}

Vuelo * ListaVuelo::buscarVueloPasajero(int id)
{
	NodoVuelo *temp = this->cabeza;
	int i = 0;
	while (temp != NULL)
	{
		if (temp->getValor()->identificador == 1)
		{
			if (id == i)
			{
				return temp->getValor();
			}
			i++;
		}
		temp = temp->getSiguiente();
	}
}

Vuelo * ListaVuelo::buscarVueloCarga(int id)
{
	NodoVuelo *temp = this->cabeza;
	int i = 0;
	while (temp != NULL)
	{
		if (temp->getValor()->identificador == 2)
		{
			if (id == i)
			{
				return temp->getValor();
			}
			i++;
		}
		temp = temp->getSiguiente();
	}
}

