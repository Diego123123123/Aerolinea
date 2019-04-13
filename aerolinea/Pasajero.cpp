#include "stdafx.h"
#include "Pasajero.h"
#include <iostream>


Pasajero::Pasajero()
{
}

Pasajero::Pasajero(string nom, string ci, string fechaNac)
{
	this->nombre = nom;
	this->ci = ci;
	this->fechaNac = fechaNac;
}

void Pasajero::llenar()
{
	cout << "NOMBRE : ";
	cin >> this->nombre;
	cout << "CI : ";
	cin >> this->ci;
	cout << "FECHA DE NACIMIENTO ";
	cin >> this->fechaNac;
}

void Pasajero::mostrar()
{
	cout << "NOMBRE : " << this->nombre << endl;
	cout << "CI : "<< this->ci << endl;
	cout << "FECHA DE NACIMIENTO "<< this->fechaNac << endl;
}

string Pasajero::getCi()
{
	return this->ci;
}


Pasajero::~Pasajero()
{
}
