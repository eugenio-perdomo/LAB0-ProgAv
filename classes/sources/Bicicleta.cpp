#include "../headers/Bicicleta.h"

// -------------------------- Constructor --------------------------//
class Bicicleta(TipoBici tipo, int cantCambios){

	this->tipo=tipo;
	this->cantCambios=cantCambios;

}

float darPrecioViaje(int duracion, int distancia){

	int precio = 0;
	precio = precioBase * distancia;

	return precio;
}

// ------ Getters ---------//
TipoBici Bicicleta::getTipoBici(){
	return this->tipo;
}

int Bicicleta::getCantCambios(){
	return this->cantCambios;

}

// ------- Setters ------- //
TipoBici Bicicleta::setTipoBici(){
		this->tipo=tipo;

}


void Bicicleta::setCantCambios(){
	this->cantCambios=cantCambios;

}

// ------ Destructor -------//
Bicicleta::~Bicicleta(){

}
