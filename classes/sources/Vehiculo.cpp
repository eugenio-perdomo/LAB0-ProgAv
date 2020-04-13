#include "../headers/Vehiculo.h"


// -------------------------- Constructor --------------------------//
Vehiculo::Vehiculo(int nroSerie, float porcentajeBateria, float precioBase)
{
	this->nroSerie=nroSerie;
	this->porcentajeBateria=porcentajeBateria;
	this->precioBase=precioBase;
	this->cantidadVehiculos=0;
}


// ------ Getters ---------//
int Vehiculo::getNroSerie()
{
	return this->nroSerie;
}

float Vehiculo::getPorcentajeBateria()
{
	return this->porcentajeBateria;
}

float Vehiculo::getPrecioBase()
{
	return this->precioBase;
}

float Vehiculo::getCantidadVehiculos(){

	return this->cantidadVehiculos;
}


// ---------------- Setters --------------- //
void Vehiculo::setNroSerie(int nroSerie)
{
	this->nroSerie=nroSerie;
}

void Vehiculo::setPorcentajeBateria(float porcentajeBateria)
{
	this->porcentajeBateria=porcentajeBateria;
}

void Vehiculo::setPrecioBase(float precioBase)
{
	this->precioBase=precioBase;
}

// ------ Destructor -------//
Vehiculo::~Vehiculo(){
	
};
