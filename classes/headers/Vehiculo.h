#ifndef USUARIO_H
#define USUARIO_H
#include "Viaje.h"


class Vehiculo
{
private:
	int nroSerie;
	float porcentajeBateria, precioBase;



public:
	//Constructor
	Vehiculo(int nroSerie, float porcentajeBateria, float precioBase);

	//Getters
	int getNroSerie();
	float getPorcentajeBateria();
	float getPrecioBase();
	Viaje* Viajes;

	//Setters
	void setNroSerie(int nroSerie);
	void setPorcentajeBateria(float porcentajeBateria);
	void setPrecioBase(float precioBase);


	virtual float DarPrecioViaje(int duracion, int distancia);

};
#endif
