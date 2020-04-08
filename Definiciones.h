#ifndef DEFINICIONES_H_INCLUDED
#define DEFINICIONES_H_INCLUDED

/*typedef struct _fecha
{
    int dia;
    int mes;
    int anio;
} DtFecha;

typedef enum _bici
{
    PASEO,MONTANIA
} TipoBici;

typedef struct _vehiculo{
    int nroSerie;
    float porcentaje;
    float precioBase;
} DtVehiculo;

typedef struct _bicicleta : _vehiculo{
    TipoBici tipo;
    int cantCambios;
} DtBicicleta;

typedef struct _monopatin : _vehiculo{
    bool tieneLuces;
} DtMonopatin;

typedef struct _viajeBase{
    DtFecha fecha;
    int duracion;
    int distancia;
} DtViajeBase;

typedef struct _viaje : _viajeBase{
    float precioTotal;
    DtVehiculo vehiculo;
} DtViaje;*/

/* class Usuario
{
private:
    string cedula;
    string nombre;
    DtFecha fechaIngreso;

public:
    string getCedula()
    {
        return cedula;
    }
    string getNombre()
    {
        return nombre;
    }
    DtFecha getFecha()
    {
        return fechaIngreso;
    }

    void setCedula(string c)
    {
        cedula = c;
    }
    void setNombre(string n)
    {
        nombre = n;
    }
    void setFecha(DtFecha f)
    {
        fechaIngreso = f;
    }

    Usuario(string c, string n/*, DtFecha f)
    {
        cedula = c;
        nombre = n;
        //fechaIngreso = f;
    }
};
*/

/*class Viaje
{
private:
    int duracion;
    int distancia;
    DtFecha fecha;

public:
    int getDuracion()
    {
        return duracion;
    }
    int getDistancia()
    {
        return distancia;
    }
    DtFecha getFecha()
    {
        return fecha;
    }

    void setDuracion(int c)
    {
        duracion = c;
    }
    void setDistancia(int d)
    {
        distancia = d;
    }
    void setFecha(DtFecha f)
    {
        fecha = f;
    }

    Viaje (int c, int d, DtFecha f)
    {
        duracion = c;
        distancia = d;
        fecha = f;
    }
}; */

/*class Vehiculo
{
protected:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;

public:
    int getNroSerie()
    {
        return nroSerie;
    }
    float getPorcentajeBateria()
    {
        return porcentajeBateria;
    }
    float getPrecioBase()
    {
        return precioBase;
    }

    void setNroSerie(int n)
    {
        nroSerie = n;
    }
    void setPorcentajeBateria(float n)
    {
        porcentajeBateria = n;
    }
    void setPrecioBase(float n)
    {
        precioBase = n;
    }

    Vehiculo (int a, float b, float c)
    {
        nroSerie = a;
        porcentajeBateria = b;
        precioBase = c;
        cout << "creo vehiculo\n";
    }
    float darPrecioViaje(int duracion, int distancia) = 0;
};

class Monopatin: public Vehiculo
{
private:
    bool tieneLuces;

public:
    bool getTieneLuces()
    {
        return tieneLuces;
    }

    void setTieneLuces(bool n)
    {
        tieneLuces = n;
    }

    Monopatin(int a, float b, float c, bool d):Vehiculo(a,b,c)
    {
        tieneLuces = d;
        cout << "creo monopatin\n";
    }
    void algo()
    {
        cout << getNroSerie() << endl << getPorcentajeBateria() << endl << getPrecioBase() <<endl<< tieneLuces;
    }
    float darPrecioViaje(int duracion, int distancia);
};

class Bicicleta: public Vehiculo
{
private:
    TipoBici tipo;
    int cantCambios;

public:
    TipoBici getTipo()
    {
        return tipo;
    }
    int getCantCambios()
    {
        return cantCambios;
    }

    void setTipo(TipoBici a)
    {
        tipo = a;
    }
    void setCantCambios(int a)
    {
        cantCambios = a;
    }

    Bicicleta(int a, float b, float c, TipoBici d, int e):Vehiculo(a,b,c)
    {
        tipo = d;
        cantCambios = e;
    }
    float darPrecioViaje(int duracion, int distancia);
};

void registrarUsuario(string ci, string nombre);
void irARegistrarUsuario();
void mostrarMenu(); */
#endif // DEFINICIONES_H_INCLUDED
