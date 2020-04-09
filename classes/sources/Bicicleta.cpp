#include "../headers/Bicicleta.h"

// -------------------------- Constructor --------------------------//

Bicicleta::Bicicleta( int nroSerie, float porcentajeBateria, float precioBase, TipoBici tipo, int cantCambios):Vehiculo(nroSerie, porcentajeBateria, precioBase){
//Bicicleta::Bicicleta((TipoBici tipo, int cantCambios):Vehiculo(int nroSerie,float porcentajeBateria, float precioBase)){

	this->nroSerie=nroSerie;
	this->porcentajeBateria=porcentajeBateria;
	this->precioBase=precioBase;
	this->tipo=tipo;
	this->cantCambios=cantCambios;

}

float Bicicleta::darPrecioViaje(int duracion, int distancia){

	//int precio = 0;
	//precio = this->precioBase * distancia;

	return this->precioBase * distancia;
}

// ------ Getters ---------//
Bicicleta::TipoBici Bicicleta::getTipo(){
	return this->tipo;
}

int Bicicleta::getCantCambios(){
	return this->cantCambios;

}

// ------- Setters ------- //
void Bicicleta::setTipoBici(TipoBici tipo){
    this->tipo=tipo;

}


void Bicicleta::setCantCambios(int cantCambios){
	this->cantCambios=cantCambios;

}

// ------ Destructor -------//
Bicicleta::~Bicicleta(){

}
