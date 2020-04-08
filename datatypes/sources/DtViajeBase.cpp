#include "../headers/DtViajeBase.h"

// -------------------------- Constructor --------------------------//
DtViajeBase::DtViajeBase(DtFecha fecha,int duracion, int distancia){

	this->fecha=fecha;
	this->duracion=duracion;
	this->distancia=distancia;
}

// ------ Getters ---------//
DtFecha DtViajeBase::getFecha(){
	return this->fecha;

}

int DtViajeBase::getDuracion(){
	return this->duracion;
}

int DtViajeBase::getDistancia(){
	return this->distancia;

}

// ------- Setters ------- //

DtFecha DtViajeBase::setFecha(DtFecha fecha){
	this->fecha=fecha;

}

void DtViajeBase::setDuracion(int duracion){
	this-duracion=duracion;

}

void DtViajeBase::setDistancia(int distancia){
	this-> distancia=distancia;

}

// ------ Destructor -------//
DtViajeBase::~DtViajeBase(){

} 
