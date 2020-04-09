#ifndef VIAJE_H
#define VIAJE_H
#include "../../datatypes/headers/DtFecha.h"
#include "Usuario.h"

class Usuario;
class Vehiculo;

class Viaje {
	private:
		DtFecha fechaViaje;
		int duracion;
		int distancia;

		Usuario* usuario;
		Vehiculo** Vehiculos;

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

