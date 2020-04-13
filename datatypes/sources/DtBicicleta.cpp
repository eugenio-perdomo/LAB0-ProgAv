#include "../headers/DtBicicleta.h"
#include "../headers/DtVehiculo.h"


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

//------------------------------ Operador --------------------------------//

std::ostream& operator<<(std::ostream& os, const DtBicicleta* DtBicicleta)
{
o<<std::string("- Número serie: ")<<DtBicicleta->getNroSerie()<<std::endl;
    o<<std::string("- Porcentaje bateria: ")<<DtBicicleta->getPorcentajeBateria()<<std::endl;
    o<<std::string("- Precio base: $ ")<<DtBicicleta->getPrecioBase()<<std::endl;
    if(DtBicicleta->getTipoBici() == DtBicicleta::TipoBici::Montania){
        o<<std::string("    - Tipo de Bicicleta: ")<< "Montania"<<std::endl;
    }else{
        o<<std::string("    - Tipo de Bicicleta: ")<< "Paseo"<<std::endl;
    }
    o<<std::string("    - Cantidad de cambios: ")<< DtBicicleta->getCantCambios() <<std::endl;
    return o;
}

// ------ Destructor -------//
DtBicicleta::~DtBicicleta(){

}
