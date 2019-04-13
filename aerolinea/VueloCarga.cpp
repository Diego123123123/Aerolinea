#include "stdafx.h"
#include "VueloCarga.h"
#include <iostream>
using namespace std;


VueloCarga::VueloCarga(string origen, string destino, string fecha, string hora, int duracion) : Vuelo(origen, destino, fecha, hora, duracion)
{
	this->ListaDePaquetes = new ListaPaquetes();
	this->identificador = 2;
}


VueloCarga::~VueloCarga()
{
}

void VueloCarga::agregarPaquete(Paquete* paq)
{
	this->ListaDePaquetes->insertarInicio(paq);
}


void VueloCarga::mostrar()
{
	cout << "-----------PAQUETES---------------" << endl;
	this->ListaDePaquetes->mostrar();
	cout << "--------------------------------------" << endl;
}
