#include "../headers/DtViaje.h"
#include "../headers/DtVehiculo.h"

// -------------------------- Constructor --------------------------//
DtViaje::DtViaje(float precioTotal,/* DtVehiculo vehiculo,*/DtFecha fecha, int duracion, int distancia):DtViajeBase(fecha,duracion,distancia){

	this->precioTotal=precioTotal;
	//this->vehiculo=vehiculo;

}


// ------ Getters ---------//
float DtViaje::getPrecioTotal(){
	return this->precioTotal;

}
/*
DtVehiculo DtViaje::getVehiculo(){
	return this->vehiculo;

}*/

// ------- Setters ------- //
void DtViaje::setPrecioTotal(float precioTotal){
	this->precioTotal=precioTotal;

}
/*
void DtViaje::setVehiculo(DtVehiculo vehiculo){
	this->vehiculo=vehiculo;

}*/

// ------ Destructor -------//
DtViaje::~DtViaje(){

}
