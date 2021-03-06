// aerolinea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListaPasajero.h"
#include <iostream>
#include "ListaVuelo.h"
#include "VueloCarga.h"
#include "VueloPasajeros.h"


int main()
{
	//ListaPasajero &lst = ListaPasajero::getInstance();
	//Pasajero  * a = new Pasajero();
	//a->llenar();
	//Pasajero  * b = new Pasajero();
	//b->llenar();
	//Pasajero  * c = new Pasajero();
	//c->llenar();
	//lst.insertarInicio(a);
	//lst.insertarInicio(b);
	//lst.insertarInicio(c);
	//lst.mostrar();
	//cout << "------------" << endl;
	//ListaPasajero lst1 = ListaPasajero::getInstance();
	//lst1.mostrar();
	Pasajero * ps1 = new Pasajero("diego", "55", "5/8/9");
	Pasajero * ps2 = new Pasajero("diego1", "56", "5/8/9");
	Pasajero * ps3 = new Pasajero("diego2", "57", "5/8/9");
	//ListaPasajero::getInstance().insertarInicio(ps1);
	//ListaPasajero::getInstance().insertarInicio(ps2);
	//ListaPasajero::getInstance().insertarInicio(ps3);
	//ListaVuelo * lst = new ListaVuelo();
	VueloPasajeros * c1 = new VueloPasajeros("bolivia", "chile", "2/8/7", "10:50", 5);
	VueloCarga * c2 = new VueloCarga("bolivia", "chile", "2/8/7", "10:50", 5);
	VueloCarga * c3 = new VueloCarga("bolivia", "chile", "2/8/7", "10:50", 5);
	//c1->agregarPasajeroAVuelo();
	//lst->insertarInicio(c1);
	//lst->insertarInicio(c2);
	//lst->insertarInicio(c3);
	//lst->mostrar();
	//ListaPaquetes * lst = new ListaPaquetes();
	Paquete * p1 = new Paquete("a", "b", 50);
	Paquete * p2 = new Paquete("c", "e", 500);
	Paquete * p3 = new Paquete("d", "f", 5000);
	//lst->insertarInicio(p1);
	//lst->insertarInicio(p2);
	//lst->insertarInicio(p3);
	//c1->agregarPasajeroAVuelo(ps1);
	//c1->agregarPasajeroAVuelo(ps2);
	//c1->agregarPasajeroAVuelo(ps3);
	c2->agregarPaquete(p1);
	c2->agregarPaquete(p2);
	c2->agregarPaquete(p3);
	//c2->mostrar();
	ListaVuelo::getInstance().insertarInicio(c1);
	ListaVuelo::getInstance().insertarInicio(c2);
	ListaVuelo::getInstance().insertarInicio(c3);
	//ListaVuelo::getInstance().mostrar();
	ListaPasajero * lspas = new ListaPasajero();
	lspas->insertarInicio(ps1);
	lspas->insertarInicio(ps2);
	lspas->insertarInicio(ps3);
	//lspas->agregarPasajeroAVuelo();
	ListaPaquetes * lspq = new ListaPaquetes();
	lspq->insertarInicio(p1);
	lspq->insertarInicio(p2);
	lspq->insertarInicio(p3);
	lspq->agregarPaqueteAlVuelo();
	ListaVuelo::getInstance().mostrarVueloPaquetes();

	cout << "-------------------------------" << endl;
	system("pause");
    return 0;
}

