#include <iostream>
//#include "Definiciones.h"
//#include "Funciones.cpp"
#include "classes/sources/Usuario.cpp"
#include "classes/headers/Usuario.h"
#include "datatypes/sources/DtFecha.cpp"


//Funciones del Main
    //void irARegistrarUsuario();
    void mostrarMenu();
//--FuncionesDeUsuario
    void registrarUsuario(std::string cedula, std::string nombre, DtFecha fecha);


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
        if(comando == 1)
        {
          std::string cedula, nombre;
          std::cout << "Ingrese Cedula\n";
          std::cin >> cedula;
          std::cout << "Ingrese Nombre\n";
          std::cin >> nombre;
          std::cout << "Ingrese la fecha separada por espacios dd/mm/aaaa\n";
          int dia, mes, anio;
          std::cin >> dia >> mes >> anio;
          registrarUsuario(cedula,nombre, DtFecha(dia,mes,anio));
        }
        else if(comando == 2)
        {
            cout << "+2\n";
        }
        else if(comando == 3)
        {
            cout << "+3\n";
        }
        else if(comando == 0)
        {
            break;
        }
    }

    /**Monopatin obj(1,2,3,true);
    obj.algo();*/
    return 0;
}

void mostrarMenu(){
    std::cout << "=================================================================\n";
    std::cout << "Laboratorio 0\n1) Registrar Usuario\n2) Otro\n3) Otro\n0) Salir\n";
    std::cout << "=================================================================\n";
}

void registrarUsuario(std::string cedula, std::string nombre, DtFecha fecha) {
   Usuario *user = new Usuario(nombre, cedula, fecha);
   std::cout << "Su nombre ingresado es: "<< user->getNombre() << std::endl;
   std::cout << "Su cedula ingresado es: "<< user->getCedula() << std::endl;

   std::cout << "Su fecha de ingresado es: "<< user->getFechaIngreso().getDia() << " / " << user->getFechaIngreso().getMes() << " / "  << user->getFechaIngreso().getAnio() << std::endl;

}
