#ifndef TRATAMIENTOS_H
#define TRATAMIENTOS_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Tratamientos{
  private:
    string dni_; //00000000A
    string nombre_; //primerNombre,segundoNombre -----> Antonio,Manuel
    string apellidos_;// primerApellido,segundoApellido -----> Lopez,Ortega
    string diagnostico_; // Ejemplo: Dolor_de_cabeza
    string medicamento_; // Ejemplo: Ibuprofeno
    string direccion_; // tipo(calle,avenida..),nombre,numero,escalera..
    string nacimiento_; //DD/MM/AAAA -----> 01/01/1999
    int telefono_; //000000000
    string seguro_;//si o no
  public:
    Tratamientos();
    void asignartratamiento(string dni);
    void modificartratamiento(string dni, string nombre, string apellidos, string diagnostico, string medicamento);
    void anulartratamiento(string dni);
    void mostrartratamientos();

};

#endif
