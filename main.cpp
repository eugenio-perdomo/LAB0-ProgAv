#include <cstdlib>
#include <iostream>
#include <ctime>

#include "classes/sources/Usuario.cpp"
#include "classes/sources/Viaje.cpp"
#include "classes/headers/Viaje.h"
#include "datatypes/sources/DtFecha.cpp"

#include "datatypes/sources/DtViajeBase.cpp"
#include "datatypes/sources/DtViaje.cpp"
#include "classes/sources/Vehiculo.cpp"


using namespace std;


int cantidadUsuarios = 0;
int cantidadVehiculos = 0;

const int MAX_USUARIOS = 50;
const int MAX_VEHICULOS = 50;

Usuario **usuarios = new Usuario *[MAX_USUARIOS];
Vehiculo **vehiculos = new Vehiculo *[MAX_VEHICULOS];

//Funciones del Main
Usuario *obtenerUsuarioPorCi(std::string cedula);
Vehiculo *obtenerVehiculoPorSerie(int nroSerie);

void mostrarMenu();
void obtenerFechaDelSitema(int &dia, int &mes, int &anio);
void registrarUsuario(std::string cedula, std::string nombre);
void cambiarBateriaVehiculo(int nroSerie, float cargaVehiculo);
void obtenerViajes(std::string ci, DtFecha fecha);
void printViajes(Usuario* user);
DtViaje** verViajesAntesDeFecha(const DtFecha& fecha,std::string cedula, int& cantViajes);
void registrarVehiculo(int nroSerie, float porcentaje, float precio);


int main()
{
    int comando = 10;

    while(comando != 0)
    {
        mostrarMenu();
        std::cout << ">";
        std::cin >> comando;

        try
        {
            if(comando == 1)
            {
                std::string cedula, nombre;
                std::cout << "Ingrese Cedula\n";
                std::cin >> cedula;
                std::cout << "Ingrese Nombre\n";
                std::cin >> nombre;

                if (obtenerUsuarioPorCi(cedula) != NULL)
                {
                  throw std::invalid_argument("Ya existe un usuario con esa cedula");
                }
                registrarUsuario(cedula,nombre);
            }
            else if(comando == 2)
            {

                int nroSerie;
                std::cout << "Ingrese un numero de serie\n";
                std::cin >> nroSerie;

                if(obtenerVehiculoPorSerie(nroSerie)!=NULL)
                  {
                    throw std::invalid_argument("Ya existe un vehiculo con ese numero de serie");
                
                  }
                float porcentaje;
                std::cout << "Ingrese un porcentaje de bateria\n";
                std::cin >> porcentaje;
                  if((porcentaje<0)||(porcentaje>100))
                  {
                    throw std::invalid_argument("Porcentaje de bateria incorrecto");
                  }


                  float precio;
                std::cout <<"Ingrese el precio del vehiculo\n";
                std::cin>> precio;
                
                  if(precio<0)
                   {
                     throw std::invalid_argument("Precio incorrecto");
                   }

                  registrarVehiculo(nroSerie,porcentaje,precio);
            }
            else if(comando == 3)
            {
              
                std::string cedula;
                std::cout << "Ingrese Cedula\n";
                std::cin >> cedula;
                Usuario* user = obtenerUsuarioPorCi(cedula);
                std::cout << "Ingrese la fecha separada por espacios dd/mm/aaaa\n";
                int dia, mes, anio, duracion, distancia;
                std::cin >> dia >> mes >> anio;
                std::cout << "Ingrese duracion viaje\n";
                std::cin >> duracion;
                std::cout << "Ingrese distancia viaje\n";
                std::cin >> distancia;
                user->ingresarViaje(new Viaje(DtFecha(dia,mes,anio),duracion,distancia));
               
                

            }
            else if(comando == 4)
            {
                std::string ci;
                std::cout <<"Ingrece cedula\n";
                std::cin >> ci;

                Usuario *user = obtenerUsuarioPorCi(ci); 
                
                int cantViajes =  user->getCantViajes();
                std::cout <<" Ingrese la fecha desde la que quiere mostrar los viajes separada por espacios dd/mm/aaaa\n";
                int dia,mes,anio;
                std::cin >> dia >> mes >> anio;
                
                    DtViaje **retorno = verViajesAntesDeFecha(DtFecha(dia,mes,anio),ci,cantViajes);
                
                
                 int i=0;
                while(retorno[i]!=NULL){
                    std::cout << "Informacion del viaje" << std::endl;
                    std::cout << retorno[i] << std::endl;
                    i++;
                }
                
            }

            else if(comando == 5)
            {
                std::string ci;
                std::cout <<"Ingrece cedula\n";
                std::cin >> ci;
                Usuario* user=obtenerUsuarioPorCi(ci);

                std::cout <<" Ingrese la fecha en la que desea eliminar por espacios dd/mm/aaaa\n";
                int dia,mes,anio;
                std::cin >> dia >> mes >> anio;
                 
                obtenerViajes(ci, DtFecha(dia,mes,anio));
            }

            else if(comando == 6)
            {
                int nroSerie;
                float porcentajeBateria;
                std::cout << "Ingrese  el porcentaje de bateria de su vehiculo" << std::endl;
                std::cin >> porcentajeBateria;
                std::cout << "Ingrese el numero de serie de su vehiculo"<<std::endl;
                std::cin >> nroSerie;
                cambiarBateriaVehiculo(nroSerie, porcentajeBateria);
            }

            else if(comando == 7){

                break;
            }

            else if(comando == 0)
            {
                break;
            }
        }
        catch (std::invalid_argument &ia)
        {
            std::cout << "Error: " << ia.what() << endl;
        }
    }

    return 0;
}
//-----------------------------------------------------------------------------------
void mostrarMenu(){
    std::cout << "=================================================================\n";
    std::cout << "LABORATORIO 0\n1) Registrar Usuario\n2) Registrar Vehiculo\n3) Ingresar Viaje\n4) Ver Viaje Antes de Fecha\n5) Eliminar Viaje\n6) Cambiar % Bateria\n0) Salir\n";
    std::cout << "=================================================================\n";
}
//-------------------------------------------------------------------------------------
void registrarUsuario(std::string cedula, std::string nombre){

  
    if (cantidadUsuarios == MAX_USUARIOS){
        throw std::invalid_argument("No se pueden agregar mas usuarios");
    }

    if (obtenerUsuarioPorCi(cedula) != NULL){
        throw std::invalid_argument("Ya existe el usuario con esa cedula");
    }
    int dia, mes, anio;
    obtenerFechaDelSitema(dia, mes, anio);
    usuarios[cantidadUsuarios] = new Usuario(nombre, cedula, DtFecha(dia,mes,anio));

    std::cout << "Su nombre ingresado es: "<< usuarios[cantidadUsuarios]->getNombre() << std::endl;
    std::cout << "Su cedula ingresado es: "<< usuarios[cantidadUsuarios]->getCedula() << std::endl;

    std::cout << "Su fecha de ingresado es: "<< usuarios[cantidadUsuarios]->getFechaIngreso().getDia() << " / " << usuarios[cantidadUsuarios]->getFechaIngreso().getMes() << " / "  << usuarios[cantidadUsuarios]->getFechaIngreso().getAnio() << std::endl;
    cantidadUsuarios++;
}
//-------------------------------------------------------------------------------------

void registrarVehiculo(int nroSerie, float porcentaje, float precio){

  if (cantidadVehiculos == MAX_VEHICULOS)
  {
     throw std::invalid_argument("No se pueden agregar mas vehiculos");
  }

      if(obtenerVehiculoPorSerie(nroSerie)!=NULL)
                  {
                    throw std::invalid_argument("Ya existe un vehiculo con ese numero de serie");
                  }
            
  vehiculos[cantidadVehiculos] = new Vehiculo(nroSerie, porcentaje, precio);
    cantidadVehiculos++;

std::cout << "Su numero de serie es: "<< vehiculos[cantidadVehiculos]->getNroSerie() << std::endl;
std::cout << "Su precio es: "<< vehiculos[cantidadVehiculos]->getPrecioBase() << std::endl;
std::cout << "Su precio es: "<< vehiculos[cantidadVehiculos]->getPorcentajeBateria() << std::endl;
}

//-------------------------------------------------------------------------------------

Usuario *obtenerUsuarioPorCi(std::string cedula)
{
    for (int i = 0; i < cantidadUsuarios; i++)
    {
        if (usuarios[i]->getCedula() == cedula)
        {
            return usuarios[i];
        }
    }
    return NULL;
}
//--------------------------------------------------------------------------------------

Vehiculo *obtenerVehiculoPorSerie(int nroSerie)
{
     
    for (int i = 0; i < cantidadVehiculos; i++)
    {
       
        if (vehiculos[i]->getNroSerie() == nroSerie)
        {
           
            return vehiculos[i];
        }
    }
    return NULL;
}

//--------------------------------------------------------------------------------------

void obtenerFechaDelSitema(int &dia, int &mes, int &anio){

    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    anio=(now->tm_year + 1900); 
    mes=(now->tm_mon + 1);
    dia=now->tm_mday;
}

//-------------------------------------------------------------------------------------

void obtenerViajes(std::string ci, DtFecha fecha)
{

   Usuario* user=obtenerUsuarioPorCi(ci);

   int cantidad = user->getCantViajes();

    for (int i=0; i < cantidad ; i++)
    {
      
        Viaje* v = user->getViaje(0);
               if((user->getViaje(i)->getFechaViaje()==fecha))
        {

          cout<< "NO_IMPLEMENTADO"<<endl;
          //.~Viaje();

        }
    

    } 
}

//--------------------------------------------------------------------------------------------------
DtViaje** verViajesAntesDeFecha(const DtFecha& fecha,std::string cedula, int& cantViajes) 
{
    DtFecha f = fecha;
    Usuario *user = obtenerUsuarioPorCi(cedula);
    
    if (user != NULL)
    {
        DtViaje **retorno = new DtViaje *[cantViajes];

        for (int i = 0; i < cantViajes && i < user->getCantViajes(); i++)
        {
            
            DtFecha dtfecha_user = user->getViaje(i)->getFechaViaje();

            if (dtfecha_user < fecha)
            {

                retorno[i] = new DtViaje(10, user->getViaje(i)->getFechaViaje(),user->getViaje(i)->getDuracion(), user->getViaje(i)->getDistancia());


                
            }
        }

        return retorno;
    }
    else
    {

        throw std::invalid_argument("Socio no existe");
    }
    return NULL;
}


//-------------------------------------------------------------------------------------
void cambiarBateriaVehiculo(int nroSerie, float porcentajeBateria)
{
    if ((porcentajeBateria<=0)||(porcentajeBateria>=100))
    {
        throw std::invalid_argument("El porcentaje de su bateria debe estar entre 0 y 100");
    }
    if (obtenerVehiculoPorSerie(nroSerie)==NULL)
    {
        throw std::invalid_argument("El numero de serie no existe");
    }

    Vehiculo *vehiculosModificables = obtenerVehiculoPorSerie(nroSerie);
    vehiculosModificables->setPorcentajeBateria(porcentajeBateria);
}
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//DtViaje** verViajesAntesDeFecha(const DtFecha& fecha, string ci, int& cantViajes)
