#include "../headers/DtMonopatin.h"
DtMonopatin::DtMonopatin(int tieneLuces, int nroSerie, float porcentajeBateria, float precioBase):DtVehiculo(nroSerie,porcentajeBateria,precioBase)
{
	this->nroSerie=nroSerie;
	this->porcentajeBateria=porcentajeBateria;
	this->precioBase=precioBase;
	this->tieneLuces=tieneLuces;
}


//Getters
int DtMonopatin::getTieneLuces()
{
	return this->tieneLuces;
}

//Setters
void DtMonopatin::setTieneLuces(int tieneLuces)
{
	this->tieneLuces=tieneLuces;
}


DtMonopatin::~DtMonopatin(){

}
