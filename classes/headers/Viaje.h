#ifndef VIAJE_H
#define VIAJE_H
#include "../../datatypes/headers/DtFecha.h"

class Vehiculo;
class Usuario;

class Viaje {
	private:
		DtFecha fechaViaje;
		int duracion;
		int distancia;

		Usuario** usuario;
		Vehiculo** vehiculos;


	public:

		Viaje(DtFecha fechaViaje, int duracion, int distancia);

		DtFecha getFechaViaje();
		int getDuracion();
		int getDistancia();

		void setFechaViaje(DtFecha &fechaViaje);
		void setDuracion(int duracion);
		void setDistancia(int distancia);

		virtual ~Viaje();

};
#endif

