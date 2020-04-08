#include "../headers/Usuario.h"

// -------------------------- Constructor --------------------------//
Usuario::Usuario(std::string nombre, std::string cedula, DtFecha fechaIngreso):fechaIngreso(fechaIngreso){
	this->cedula=cedula;
	this->nombre=nombre;
	this->fechaIngreso=fechaIngreso;
}

// ------ Getters ---------//
std::string Usuario::getNombre(){
	return this->nombre;
}

std::string Usuario::getCedula(){
	return this->cedula;
}

DtFecha Usuario::getFechaIngreso(){
	return this->fechaIngreso;


}
// ------- Setters ------- //

void Usuario::setNombre(std::string nombre){
	this->nombre=nombre;

}

void Usuario::setCedula(std::string cedula){
	this->cedula=cedula;
}

void Usuario::setFechaIngreso(DtFecha &fechaIngreso){
	this->fechaIngreso=fechaIngreso;


}

// ------ Destructor -------//
Usuario::~Usuario(){

}
