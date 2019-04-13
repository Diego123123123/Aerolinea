#pragma once
#include <string>
using namespace std;
class Vuelo
{
public:
	Vuelo(string origen, string destino, string fecha, string hora, int duracion);
	~Vuelo();
	virtual void mostrar();
	string getFecha();
	string getHora();
	int identificador;
private:
	string origen, destino, fecha, hora;
	int duracion;
};

