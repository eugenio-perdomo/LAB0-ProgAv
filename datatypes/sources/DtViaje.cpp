#include "../headers/DtViaje.h"


// -------------------------- Constructor --------------------------//

DtViaje::DtViaje(float precioTotal, DtFecha fecha, int duracion, int distancia):DtViajeBase(fecha, duracion, distancia){ //&

    this->fecha=fecha;
    this->duracion=duracion;
    this->distancia=distancia;
	this->precioTotal=precioTotal;
}


// ------ Getters ---------//
float DtViaje::getPrecioTotal(){
	return this->precioTotal;

}

/*DtVehiculo DtViaje::getVehiculo(){
	return this->vehiculo;

}
void DtViaje::setVehiculo(DtVehiculo vehiculo){
	this->vehiculo=vehiculo;

}*/


/*DtViaje* DtViaje::copiarViaje(DtViaje dt){
	return new DtViaje(dt);
}*/


// ------- Setters ------- //
void DtViaje::setPrecioTotal(float precioTotal){
	this->precioTotal=precioTotal;

}



// ------ Destructor -------//
DtViaje::~DtViaje(){

}
