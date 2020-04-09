#include "../headers/Monopatin.h"


	// -------------------------- Constructor --------------------------//
	Monopatin::Monopatin(int nroSerie, float porcentajeBateria, float precioBase,int tieneLuces):Vehiculo(nroSerie, porcentajeBateria, precioBase){
		this->nroSerie=nroSerie;
		this->porcentajeBateria=porcentajeBateria;
		this->precioBase=precioBase;
		this->tieneLuces=tieneLuces;
	}
// -------------------------- Método --------------------------//
	float Monopatin::darPrecioViaje(int duracion, int distancia){

		int precio = 0;
		if (tieneLuces==1)
		{
			precio = 0.5 * duracion + distancia * this->precioBase;
		} else{

			precio = distancia * this->precioBase;
		}

		return precio;
	}

// ------ Getter ---------//
int Monopatin::getTieneLuces(){
	return this->tieneLuces;

}

// ------- Setter ------- //
void Monopatin::setTieneLuces(int tieneLuces){
	this->tieneLuces=tieneLuces;
}

// ------ Destructor -------//
Monopatin::~Monopatin(){


}
