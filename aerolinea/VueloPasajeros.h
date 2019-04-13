#pragma once
#include "Vuelo.h"
#include "ListaPasajero.h"

class VueloPasajeros :
	public Vuelo
{
public:
	VueloPasajeros(string origen, string destino, string fecha, string hora, int duracion);
	~VueloPasajeros();
	void agregarPasajeroAVuelo(Pasajero * psj);
	void mostrar();

private:
	ListaPasajero * listaDePasajeros;

};

