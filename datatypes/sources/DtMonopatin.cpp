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

//------------------------------ Operador --------------------------------//

std::ostream& operator<<(std::ostream& os, const DtMonopatin* DtMonopatin)
{
o<<std::string("- Número serie: ")<<DtMonopatin->getNroSerie()<<std::endl;
    o<<std::string("- Porcentaje bateria: ")<<DtMonopatin->getPorcentajeBateria()<<std::endl;
    o<<std::string("- Precio base: $ ")<<DtMonopatin->getPrecioBase()<<std::endl;
    
    if(DtMonopatin->getTieneLuces()== true)
    {
    	o<<std::string("-  Tiene Luces: ")<<DtMonopatin->getTieneLuces()<<std::endl;
    }else{

    	o<<std::string("-  No Tiene Luces: ")<<DtMonopatin->getTieneLuces()<<std::endl;
    }
}

DtMonopatin::~DtMonopatin(){

}
