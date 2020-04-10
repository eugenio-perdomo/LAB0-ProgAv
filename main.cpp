#include <cstdlib>
#include <iostream>
#include <ctime>
//#include "Definiciones.h"
//#include "Funciones.cpp"
#include "classes/sources/Usuario.cpp"
#include "classes/sources/Viaje.cpp"
#include "classes/headers/Viaje.h"
#include "datatypes/sources/DtFecha.cpp"

int cantidadUsuarios = 0;
const int MAX_USUARIOS = 50;
Usuario **usuarios = new Usuario *[MAX_USUARIOS];
const int MAX_VEHICULOS = 50;

//Funciones del Main
    //void irARegistrarUsuario();
    Usuario *obtenerUsuarioPorCi(std::string cedula);
    void mostrarMenu();
    void obtenerHoraDelSitema(int &dia, int &mes, int &anio);
//--FuncionesDeUsuario
    void registrarUsuario(std::string cedula, std::string nombre, DtFecha fecha);
//--FuncionasDeViaje
    //void agregarViaje(std::string cedula, DtFecha fecha, int duracion, int distancia);
    

using namespace std;
/// Probando Git
int main()
{
    int comando = 10;

    while(comando != 0)
    {
        mostrarMenu();
        std::cout << ">";
        std::cin >> comando;
        try{
        if(comando == 1) {
          
            std::string cedula, nombre;
            std::cout << "Ingrese Cedula\n";
            std::cin >> cedula;
            std::cout << "Ingrese Nombre\n";
            std::cin >> nombre;

            int dia, mes, anio;
            obtenerHoraDelSitema(dia, mes, anio);
            if (obtenerUsuarioPorCi(cedula) != NULL){
              throw std::invalid_argument("Yas existes unos usuarios con esas cedulas");
            }
            registrarUsuario(cedula,nombre, DtFecha(dia,mes,anio));
          }
          else if(comando == 2)
          {
              std::string cedula;
              std::cout << "Ingrese Cedula\n";
              std::cin >> cedula;
              Usuario* user = obtenerUsuarioPorCi(cedula);
              std::cout << "Ingrese la fecha separada por espacios dd/mm/aaaa\n";
              int dia, mes, anio;
              std::cin >> dia >> mes >> anio;
              user->ingresarViaje(new Viaje(DtFecha(dia,mes,anio),5,10));
              //std::cout << "Duracion del viaje:" <<user->getViajes()[0]->getDuracion() << std::endl;
          }
          else if(comando == 3)
          {
              

          }
          else if(comando == 0)
          {
              break;
          }
        } catch (std::invalid_argument &ia) {
            std::cout << "Error: " << ia.what() << endl;
        }
    }

    /**Monopatin obj(1,2,3,true);
    obj.algo();*/
    return 0;
}

void mostrarMenu(){
    std::cout << "=================================================================\n";
    std::cout << "Laboratorio 0\n1) Registrar Usuario\n2) Registrar Viaje\n3) Otro\n0) Salir\n";
    std::cout << "=================================================================\n";
}

void registrarUsuario(std::string cedula, std::string nombre, DtFecha fecha) {


  if (cantidadUsuarios == MAX_USUARIOS){
    throw std::invalid_argument("No se pueden agregar mas usuarios");
  }

  if (obtenerUsuarioPorCi(cedula) != NULL){
    throw std::invalid_argument("Ya existe el usuario con esa cedula");
  }
  
  usuarios[cantidadUsuarios] = new Usuario(nombre, cedula, fecha);
  
 std::cout << "Su nombre ingresado es: "<< usuarios[cantidadUsuarios]->getNombre() << std::endl;
 std::cout << "Su cedula ingresado es: "<< usuarios[cantidadUsuarios]->getCedula() << std::endl;

 std::cout << "Su fecha de ingresado es: "<< usuarios[cantidadUsuarios]->getFechaIngreso().getDia() << " / " << usuarios[cantidadUsuarios]->getFechaIngreso().getMes() << " / "  << usuarios[cantidadUsuarios]->getFechaIngreso().getAnio() << std::endl;
 cantidadUsuarios++;
}

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


void obtenerHoraDelSitema(int &dia, int &mes, int &anio){

    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    anio=(now->tm_year + 1900); 
    mes=(now->tm_mon + 1);
    dia=now->tm_mday;
}

