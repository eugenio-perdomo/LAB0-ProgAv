#ifndef DTBICICLETA_H
#define DTBICICLETA_H
#include "DtVehiculo.h"


class DtBicicleta: public DtVehiculo{

   public:

        enum TipoBici{Paseo,Montania};

		DtBicicleta(TipoBici tipo, int cantCambios, int nroSerie, float porcentaje, float precioBase);


		TipoBici getTipo();
		int getCantCambios();


		void setTipoBici(TipoBici tipo);
		void setCantCambios(int cantCambios);

		virtual ~DtBicicleta();

    private:

        TipoBici tipo;
		int cantCambios;




};



#endif // DTBICICLETA_H
