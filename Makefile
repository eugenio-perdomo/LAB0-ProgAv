OBJETOS = Usuario.o Viaje.o \
Vehiculo.o Bicicleta.o Monopatin.o \
DtFecha.o DtViajeBase.o \
DtViaje.o DtVehiculo.o \
DtBicicleta.o \ DtMonopatin.o

FUENTES = Usuario.cpp Usuario.h \
Viaje.cpp Viaje.h \
Vehiculo.cpp Vehiculo.h \
Bicicleta.cpp Bicicleta.h \
Monopatin.cpp Monopatin.h \
DtFecha.cpp DtFecha.h \
DtViajeBase.cpp DtViajeBase.h \
DtViaje.cpp DtViaje.h \
DtVehiculo.cpp DtVehiculo.h \
DtBicicleta.cpp DtBicicleta.h \
DtMonopatin.cpp DtMonopatin.h


CC = g++
OPCIONES = -std=c++11 -g -Wall -Werror


main: $(OBJETOS) main.cpp Makefile
	$(CC) $(OPCIONES) $(OBJETOS) main.cpp -o main

Usuario.o: ./classes/headers/Usuario.h ./classes/sources/Usuario.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Usuario.cpp

Viaje.o: ./classes/headers/Viaje.h ./classes/sources/Viaje.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Viaje.cpp

Vehiculo.o: ./classes/headers/Vehiculo.h ./classes/sources/Vehiculo.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Vehiculo.cpp

Bicicleta.o: ./classes/headers/Bicicleta.h ./classes/sources/Bicicleta.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Bicicleta.cpp

Monopatin.o: ./classes/headers/Monopatin.h ./classes/sources/Monopatin.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Monopatin.cpp

DtFecha.o: ./datatypes/headers/DtFecha.h ./datatypes/sources/DtFecha.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtFecha.cpp

DtViajeBase.o: ./datatypes/headers/DtViajeBase.h ./datatypes/sources/DtViajeBase.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtViajeBase.cpp

DtViaje.o: ./datatypes/headers/DtViaje.h ./datatypes/sources/DtViaje.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtViaje.cpp

DtVehiculo.o: ./datatypes/headers/DtVehiculo.h ./datatypes/sources/DtVehiculo.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtVehiculo.cpp

DtBicicleta.o: ./datatypes/headers/DtBicicleta.h ./datatypes/sources/DtBicicleta.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtBicicleta.cpp

DtMonopatin.o: ./datatypes/headers/DtMonopatin.h ./datatypes/sources/DtMonopatin.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtMonopatin.cpp


clean:
	rm -f $(OBJETOS) main

rebuild:
	make clean
	make



