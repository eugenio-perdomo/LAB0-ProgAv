#include "classes/sources/Usuario.cpp"
#include "classes/headers/Usuario.h"
void mostrarMenu(){
    std::cout << "\eLaboratorio 0\n1) Registrar Usuario\n2) Otro\n3) Otro\n0) Salir\n";
}

void irARegistrarUsuario(){
   std::string cedula, nombre;
   std::cout << "Ingrese Cedula\n";
   std::cin >> cedula;
   std::cout << "Ingrese Nombre\n";
   std::cin >> nombre;
   Usuario *user = new Usuario(nombre,cedula);
   std::cout << "Su nombre ingresado es: "<< user->getNombre() << std::endl;
   std::cout << "Su cedula ingresado es: "<< user->getCedula() << std::endl;
}
