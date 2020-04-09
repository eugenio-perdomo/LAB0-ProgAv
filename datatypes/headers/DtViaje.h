#ifndef DTVIAJE_H
#define DTVIAJE_H
#include <iostream>
#include "../headers/DtVehiculo.h"
#include "DtViajeBase.h"
#include "DtFecha.h"


class DtViaje : public DtViajeBase{
		private:
			float precioTotal;
			//DtVehiculo vehiculo;

		public:
			//Constructor
			DtViaje(float precioTotal, /*DtVehiculo vehiculo,*/DtFecha fecha, int duracion, int distancia);

			//Getters
			float getPrecioTotal();
			//DtVehiculo getVehiculo();

			//Setters
			void setPrecioTotal(float precioTotal);
		//	void setVehiculo(DtVehiculo vehiculo);

			//Destructor
			virtual ~DtViaje();

};

#endif

