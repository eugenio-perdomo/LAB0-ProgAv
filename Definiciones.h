#ifndef DEFINICIONES_H_INCLUDED
#define DEFINICIONES_H_INCLUDED

class Usuario
{
private:
    string cedula;
    string nombre;
    DtFecha fechaIngreso;
}

class Viaje
{
private:
    DtFecha fecha;
    int duracion;
    int distancia;
}

class Vehiculo
{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;

public:
    float darPrecioViaje(int duracion, int distancia);
}

class Monopatin: public Vehiculo
{
bool:
    private tieneLuces;

public:
    float darPrecioViaje(int duracion, int distancia);
}

class Bicicleta: public Vehiculo
{
private:
    TipoBici tipo;
    int cantCambios;
public:
    float darPrecioViaje(int duracion, int distancia);
}

class DtFecha
{
private:
    int dia;
    int mes;
    int anio;
}

typedef enum _bici
{
    PASEO,MONTANIA
} TipoBici;










#endif // DEFINICIONES_H_INCLUDED
