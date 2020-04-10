#include "../headers/DtBicicleta.h"
#include "../headers/dtvehiculo.h"


DtBicicleta::DtBicicleta(TipoBici tipo, int cantCambios, int nroSerie, float porcentaje, float precioBase):DtVehiculo(nroSerie,porcentaje,precioBase){

    this->nroSerie=nroSerie;
	this->porcentajeBateria=porcentajeBateria;
	this->precioBase=precioBase;
	this->tipo=tipo;
	this->cantCambios=cantCambios;

}

DtBicicleta::TipoBici DtBicicleta::getTipo(){
	return this->tipo;
}

int DtBicicleta::getCantCambios(){
	return this->cantCambios;

}

// ------- Setters ------- //
void DtBicicleta::setTipoBici(TipoBici tipo){
    this->tipo=tipo;

}


void DtBicicleta::setCantCambios(int cantCambios){
	this->cantCambios=cantCambios;

}

// ------ Destructor -------//
DtBicicleta::~DtBicicleta(){

}
