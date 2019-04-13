#pragma once
#include <string>
using namespace std;
class Pasajero
{
public:
	Pasajero();
	Pasajero(string nom, string ci, string fechaNac);
	void llenar();
	void mostrar();
	string getCi();
	~Pasajero();
private:
	string nombre, ci, fechaNac;
};

