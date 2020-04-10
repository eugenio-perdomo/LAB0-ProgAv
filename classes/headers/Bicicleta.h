#ifndef BICICLETA_H
#define BICICLETA_H
#include "../headers/Vehiculo.h"


class Bicicleta : public Vehiculo{

	public:

        enum TipoBici{Paseo,Montania};

		Bicicleta(int nroSerie, float porcentajeBateria, float precioBase, TipoBici tipo,int cantCambios);//, int nroSerie, float porcentajeBateria, float precioBase):Vehiculo(nroSerie, porcentajeBateria, precioBase);

		float darPrecioViaje(int duracion, int distancia);

		TipoBici getTipo();
		int getCantCambios();


		void setTipoBici(TipoBici tipo);
		void setCantCambios(int cantCambios);

		virtual ~Bicicleta();

    private:

        TipoBici tipo;
		int cantCambios;
};
	


#endif
