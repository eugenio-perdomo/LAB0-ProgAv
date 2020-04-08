#include "../headers/DtViaje.h"


// -------------------------- Constructor --------------------------//
DtViaje::DtViaje(float precioTotal, DtVehiculo vehiculo){

	this->precioTotal=precioTotal;
	this->vehiculo=vehiculo;

}


// ------ Getters ---------//
float DtViaje::getPrecioTotal(){
	return this->precioTotal;

}

DtVehiculo DtViaje::getVehiculo(){
	return this->vehiculo;

}

// ------- Setters ------- //
float DtViaje::setPrecioTotal(){
	this->precioTotal=precioTotal;

}

DtVehiculo DtViaje::setVehiculo(){
	this->vehiculo=vehiculo;

}

// ------ Destructor -------//
DtViaje::~DtViaje(){

}
