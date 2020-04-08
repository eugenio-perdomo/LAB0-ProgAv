#include "../headers/Monopatin.h"


	// -------------------------- Constructor --------------------------//
	Monopatin::Monopatin(bool tieneLuces){
		this->tieneLuces=tieneLuces;

	}
// -------------------------- Método --------------------------//
	float Monopatin::darPrecioViaje(int duracion, int distancia){

		int precio = 0;
		if (tieneLuces=true)
		{
			precio = 0.5 * duracion + distancia * precioBase;
		} else{

			precio = distancia * precioBase;
		}

		return precio;
	}

// ------ Getter ---------//
bool getTieneLuces(){
	return this->getTieneLuces=getTieneLuces;

}

// ------- Setter ------- //
void setTieneLuces(){
	this->tieneLuces=tieneLuces;
}

// ------ Destructor -------//
Monopatin::~Monopatin(){

	
}