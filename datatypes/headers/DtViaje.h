#ifndef DtViaje_h
#define DtViaje_h
#include <iostream>
#include "../headers/DtVehiculo.h"


class DtViaje: public DtViajeBase{
		private:
			float precioTotal;
			DtVehiculo vehiculo;

		public:
			//Constructor
			DtViaje(float precioTotal, DtVehiculo vehiculo);

			//Getters	
			float getPrecioTotal();
			DtVehiculo getVehiculo();

			//Setters
			void setPrecioTotal();
			void setVehiculo();

			//Destructor	
			virtual ~DtViaje();



}
#endif
