#ifndef DTVEHICULO_H
#define DTVEHICULO_H
#include <iostream>
//#include "../../classes/headers/Viaje.h"

class DtVehiculo
{
	protected:
		int nroSerie;
		float porcentajeBateria;
		float precioBase;

	public:
		//Constructor
		DtVehiculo(int nroSerie, float porcentajeBateria, float precioBase);

		//Getters
		int getNroSerie();
		float getPorcentajeBateria();
		float getPrecioBase();

		//Setters
		void setNroSerie(int nroSerie);
		void setPorcentajeBateria(float porcentajeBateria);
		void setPrecioBase(float precioBase);


	virtual ~DtVehiculo();


};
#endif
