#include "../headers/DtVehiculo.h"
DtVehiculo::DtVehiculo(int nroSerie, float porcentajeBateria, float precioBase)
{
	this->nroSerie=nroSerie;
	this->porcentajeBateria=porcentajeBateria;
	this->precioBase=precioBase;
}


//Getters
int DtVehiculo::getNroSerie()
{
	return this->nroSerie;
}

float DtVehiculo::getPorcentajeBateria()
{
	return this->porcentajeBateria;
}

float DtVehiculo::getPrecioBase()
{
	return this->precioBase;
}


//Setters
void DtVehiculo::setNroSerie(int nroSerie)
{
	this->nroSerie=nroSerie;
}

void DtVehiculo::setPorcentajeBateria(float porcentajeBateria)
{
	this->porcentajeBateria=porcentajeBateria;
}

void DtVehiculo::setPrecioBase(float precioBase)
{
	this->precioBase=precioBase;
}


DtVehiculo::~DtVehiculo(){

}
