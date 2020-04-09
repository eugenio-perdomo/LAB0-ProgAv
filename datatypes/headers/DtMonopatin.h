#ifndef DTMONOPATIN_H
#define DTMONOPATIN_H
#include <iostream>
#include "DtVehiculo.h"

class DtMonopatin : public DtVehiculo
{
	private:
		int tieneLuces;


	public:
		//Constructor
		DtMonopatin(int tieneLuces,int nroSerie, float porcentajeBateria, float precioBase);

		//Getters
		int getTieneLuces();


		//Setters
		void setTieneLuces(int tieneLuces);


	virtual ~DtMonopatin();


};

#endif
