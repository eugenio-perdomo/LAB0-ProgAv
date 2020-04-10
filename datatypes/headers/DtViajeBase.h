#ifndef DTVIAJEBASE_H
#define DTVIAJEBASE_H
#include <iostream>
#include "DtFecha.h"

class DtViajeBase{

	protected:

		DtFecha fecha;
		int duracion;
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



};

#endif


