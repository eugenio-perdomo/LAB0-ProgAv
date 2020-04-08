#ifndef MONOPATIN_H
#define MONOPATIN_H
#include "../headers/Vehiculo.h"

class Vehiculo;

class Monopatin : public Vehiculo{

	private:
		bool tieneLuces;


	public:

		//Constructor
		Monopatin(bool tieneLuces);

		//Metodo
		float darPrecioViaje(int duracion, int distancia);

		// Getter
		bool getTieneLuces();

		//Setter
		void setTieneLuces();


}

#endif