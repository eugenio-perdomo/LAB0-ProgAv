#ifndef BICICLETA_H
#define BICICLETA_H
#include "../headers/Vehiculo.h"

class Bicileta : public Vehiculo{

	private:
		enum TipoBici{Paseo, Montaña};
		
		TipoBici tipo;
		int cantCambios;

	public:
		

		Bicicleta(TipoBici tipo, int cantCambios);

		float darPrecioViaje(int duracion, int distancia);

		TipoBici getTipoBici();
		int getCantCambios();


		TipoBici setTipoBici();
		void setCantCambios();

}


#endif