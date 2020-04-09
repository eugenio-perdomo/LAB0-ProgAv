#ifndef MONOPATIN_H
#define MONOPATIN_H
#include "../headers/Vehiculo.h"

class Monopatin : public Vehiculo {

	public:

		//Constructor
		Monopatin(int nroSerie, float porcentajeBateria, float precioBase,int tieneLuces);

		//Metodo
		float darPrecioViaje(int duracion, int distancia);

		// Getter
		int getTieneLuces();

		//Setter
		void setTieneLuces(int tieneLuces);

        virtual ~Monopatin();
    private:
		int tieneLuces;

};

#endif
