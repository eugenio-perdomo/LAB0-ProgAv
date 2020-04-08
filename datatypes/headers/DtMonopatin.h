#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>

class DtMonopatin
{
	private:
		bool tieneLuces;
		

	public:
		//Constructor
		DtMonopatin(bool tieneLuces);

		//Getters
		bool getTieneLuces();


		//Setters
		void setTieneLuces(bool tieneLuces);


	virtual ~DtMonopatin(); 


};

#endif
