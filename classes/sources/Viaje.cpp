#include "../headers/Viaje.h"


// -------------------------- Constructor --------------------------//
Viaje::Viaje(DtFecha fechaViaje, int duracion, int distancia):fechaViaje(fechaViaje){

	this->fechaViaje=fechaViaje;
	this->duracion=duracion;
	this->distancia=distancia;
}

// ------ Getters ---------//
DtFecha Viaje::getFechaViaje(){
	return this->fechaViaje;

}

int Viaje::getDuracion(){
	return this->duracion;

}

int Viaje::getDistancia(){
	return this->distancia;

}

// ------- Setters ------- //
void Viaje::setFechaViaje(DtFecha &fechaViaje){
		this->fechaViaje=fechaViaje;

}

void Viaje::setDuracion(int duracion){
	 this->duracion=duracion;

}

void Viaje::setDistancia(int distancia){
	 this->distancia=distancia;

}

 Viaje::~Viaje(){


}
