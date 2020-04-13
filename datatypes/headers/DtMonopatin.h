#ifndef DTMONOPATIN_H
#define DTMONOPATIN_H
#include <iostream>
#include "DtVehiculo.h"

class DtMonopatin : public DtVehiculo
{
	private:
		bool tieneLuces;

	public:
		//Constructor
		DtMonopatin(int tieneLuces, int nroSerie, float porcentajeBateria, float precioBase);

		//Getters
		int getTieneLuces();


		//Setters
		void setTieneLuces(int tieneLuces);

		friend std::ostream& operator<<(std::ostream& os, const DtMonopatin& Monopatin);
	virtual ~DtMonopatin();


};

#endif
