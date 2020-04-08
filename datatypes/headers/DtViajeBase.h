#ifndef DtViajeBase_h
#define DtViajeBase_h
#include <iostream>
#include "../headers/DtFecha.h"



class DtViajeBase{
	private:
		DtFecha fecha;
		int duracion:
		int distancia;

	public:

		DtViajeBase(DtFecha fecha, int duracion, int distancia);
		
		DtFecha getFecha();
		int getDuracion();
		int getDistancia();

		void setFecha(DtFecha fecha);
		void setDuracion(int duracion);
		void setDistancia(int distancia);
		
		virtual ~DtViajeBase();



}

#endif


