#pragma once
#include <string>
using namespace std;
class Paquete
{
public:
	Paquete();
	Paquete(string origen, string dest, double peso);
	~Paquete();
	void llenar();
	void mostrar();
	double getPeso();
private:
	string nombreDelPasajeroQueEnviaElPaquete, nombreDelPasajeroQueRecibeElPaquete;
	double peso;
};

