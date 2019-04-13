#include "stdafx.h"
#include "Paquete.h"
#include "iostream"



Paquete::Paquete()
{
}

Paquete::Paquete(string origen, string dest, double peso)
{
	this->nombreDelPasajeroQueEnviaElPaquete = origen;
	this->nombreDelPasajeroQueRecibeElPaquete = dest;
	this->peso = peso;
}


Paquete::~Paquete()
{
}

void Paquete::llenar()
{
	cout << "nombre del pasajero que envia el paquete : ";
	cin >> this->nombreDelPasajeroQueEnviaElPaquete;
	cout << "nombre del pasajero que recibe el paquete : ";
	cin >> this->nombreDelPasajeroQueRecibeElPaquete;
	cout << "peso del paquete : ";
	cin >> this->peso;
}

void Paquete::mostrar()
{
	cout << "EL QUE ENVIA EL PAQUETE ES  : " << this->nombreDelPasajeroQueEnviaElPaquete << endl;
	cout << "EL QUE RECIBE EL PAQUETE ES : " << this->nombreDelPasajeroQueRecibeElPaquete<< endl;
	cout << "EL PESO DEL PAQUETE ES : " << this->peso << endl;
}

double Paquete::getPeso()
{
	return this->peso;
}
