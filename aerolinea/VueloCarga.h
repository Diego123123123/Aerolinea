#pragma once
#include "Vuelo.h"
#include "ListaPaquetes.h"

class VueloCarga :
	public Vuelo
{
public:
	VueloCarga(string origen, string destino, string fecha, string hora, int duracion);
	~VueloCarga();
	void agregarPaquete(Paquete * paq);
	void mostrar();
private:
	ListaPaquetes * ListaDePaquetes;
};

