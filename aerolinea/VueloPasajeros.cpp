#include "stdafx.h"
#include "VueloPasajeros.h"
#include <iostream>
#include "ListaPasajero.h"
using namespace std;


VueloPasajeros::VueloPasajeros(string origen, string destino, string fecha, string hora, int duracion) : Vuelo( origen,  destino,  fecha,  hora,  duracion)
{
	this->listaDePasajeros = new ListaPasajero();
	this->identificador = 1;
}

VueloPasajeros::~VueloPasajeros()
{
}

void VueloPasajeros::agregarPasajeroAVuelo(Pasajero * psj)
{
	this->listaDePasajeros->insertarInicio(psj);

}

void VueloPasajeros::mostrar()
{
	cout << "------PASAJEROS--------" << endl;
	this->listaDePasajeros->mostrar();
}
