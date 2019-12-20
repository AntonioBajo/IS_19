#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

using namespace std;


class Paciente{
 private:
   string nombre_; //primerNombre,segundoNombre -----> Antonio,Manuel
   string apellidos_; // primerApellido,segundoApellido -----> Lopez,Ortega
   string dni_; // 00000000A
   string direccion_;// tipo(calle,avenida..),nombre,numero,escalera..
   int telefono_; // 000000000
   string nacimiento_; // DD/MM/AAAA -----> 01/01/2000
   string seguro_; // si o no
 public:
   Paciente();
   void anadirpaciente(string nombre, string apellidos, string dni, string direccion, int telefono, string nacimiento, string seguro);
   void editarpaciente(string nombre, string apellidos, string dni, string direccion, int telefono, string nacimiento, string seguro );
   void consultarpaciente(string dni);
   void borrarpaciente(string dni);
   void mostrarpacientes();
};



#endif
