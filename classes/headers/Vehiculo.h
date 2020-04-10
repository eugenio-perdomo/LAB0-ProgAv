#ifndef VEHICULO_H
#define VEHICULO_H
#include "Viaje.h"


class Vehiculo
{
protected:
	int nroSerie;
	float porcentajeBateria, precioBase;

	Viaje* viajes;
	
public:
	//Constructor
	Vehiculo(int nroSerie,float porcentajeBateria,float precioBase);

	//Getters
	int getNroSerie();
	float getPorcentajeBateria();
	float getPrecioBase();


	//Setters
	void setNroSerie(int nroSerie);
	void setPorcentajeBateria(float porcentajeBateria);
	void setPrecioBase(float precioBase);


	virtual float DarPrecioViaje(int duracion, int distancia) = 0; //{return 0;}

	virtual ~Vehiculo();
};
#endif
