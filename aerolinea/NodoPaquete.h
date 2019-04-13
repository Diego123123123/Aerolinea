#pragma once
#include "Paquete.h"

class NodoPaquete
{
public:
	NodoPaquete();
	~NodoPaquete();
	Paquete * getValor();
	void setValor(Paquete * paquete);
	NodoPaquete * getSiguiente();
	void setSiguiente(NodoPaquete* siguiente);

private:
	Paquete * paquete;
	NodoPaquete * siguiente;
};

