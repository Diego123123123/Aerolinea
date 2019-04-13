#include "stdafx.h"
#include "Vuelo.h"
#include <iostream>


Vuelo::Vuelo(string origen, string destino, string fecha, string hora, int duracion)
{
	this->origen = origen;
	this->destino = destino;
	this->fecha = fecha;
	this->hora = hora;
	this->duracion = duracion;
}

void Vuelo::mostrar()
{
	cout << "EL ORIGEN ES : " << this->origen << endl;
	cout << "EL DESTINO ES : " << this->destino << endl;
	cout << "LA FECHA ES : " << this->fecha << endl;
	cout << "LA HORA ES : " << this->hora << endl;
	cout << "LA DURACION ES : " << this->duracion << endl;
}

string Vuelo::getFecha()
{
	return this->fecha;
}

string Vuelo::getHora()
{
	return this->hora;
}

Vuelo::~Vuelo()
{
}
