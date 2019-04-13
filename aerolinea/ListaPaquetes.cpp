#include "stdafx.h"
#include "ListaPaquetes.h"
#include <iostream>
#include "VueloPasajeros.h"
#include "ListaVuelo.h"
#include "VueloCarga.h"


ListaPaquetes::ListaPaquetes()
{
}


ListaPaquetes::~ListaPaquetes()
{
}

void ListaPaquetes::insertarInicio(Paquete* dato)
{
	if (this->cabeza == NULL)
	{
		this->cabeza = new NodoPaquete();
		this->cabeza->setValor(dato);
	}
	else
	{
		NodoPaquete * temp = new NodoPaquete();
		temp->setValor(dato);
		temp->setSiguiente(this->cabeza);
		this->cabeza = temp;
	}
	this->ordenar();
}

void ListaPaquetes::ordenar()
{
	int intercambiado, i;
	NodoPaquete * ptr;
	NodoPaquete * ptraux = NULL;
	if (this->cabeza == NULL)
		return;

	do
	{
		intercambiado = 0;
		ptr = this->cabeza;

		while (ptr->getSiguiente() != ptraux)
		{
			if (ptr->getValor()->getPeso() > ptr->getSiguiente()->getValor()->getPeso())
			{
				intercambiar(ptr, ptr->getSiguiente());
				intercambiado = 1;
			}
			ptr = ptr->getSiguiente();
		}
		ptraux = ptr;
	} while (intercambiado);
}

void ListaPaquetes::mostrar()
{
	NodoPaquete *temp = this->cabeza;
	int id = 0;
	while (temp != NULL)
	{
		cout << "ID DEL PAQUETE : " << id << endl;
		temp->getValor()->mostrar();
		temp = temp->getSiguiente();
		id++;
	}
}

void ListaPaquetes::intercambiar(NodoPaquete* a, NodoPaquete* b)
{
	Paquete * temp = a->getValor();
	a->setValor(b->getValor());
	b->setValor(temp);
}

NodoPaquete* ListaPaquetes::getCabeza()
{
	return this->cabeza;
}

Paquete* ListaPaquetes::buscarPaquete(int id)
{
	NodoPaquete *temp = this->cabeza;
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

void ListaPaquetes::agregarPaqueteAlVuelo()
{
	int id;
	int vuelo;
	this->mostrar();
	cout << "INGRESE EL ID DEL PAQUETE : ";
	cin >> id;
	Paquete * ps = this->buscarPaquete(id);
	if (ps == NULL)
	{
		cout << "Paquete no encontrado";
		return;
	}
	ListaVuelo::getInstance().mostrarVueloPaquetes();
	cout << "INGRESE EL ID DEL VUELO : ";
	cin >> vuelo;
	VueloCarga * vuelo1 = (VueloCarga *)ListaVuelo::getInstance().buscarVueloCarga(vuelo);
	if (vuelo1 == NULL)
	{
		cout << "vuelo no encontrado";
		return;
	}
	vuelo1->agregarPaquete(ps);
}

