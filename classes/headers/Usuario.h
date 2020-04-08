#ifndef USUARIO_H
#define USUARIO_H
#include "../../datatypes/headers/DtFecha.h"
#include "Viaje.h"

class Viaje;


class Usuario
{
private:
    std::string cedula;
    std::string nombre;
    DtFecha fechaIngreso;

    Viaje** viajes;

public:
    Usuario(std::string nombre, std::string cedula,DtFecha fechaIngreso);
 
    //Limites
    static const int MAX_VIAJES =100;
    //Getters
    std::string getCedula();
    std::string getNombre();
    DtFecha getFechaIngreso();
    
    //Setters
    void setNombre(std::string nombre);
    void setCedula(std::string cedula);
    void setFechaIngreso(DtFecha &fechaIngreso);


    virtual ~Usuario();

};
#endif
