#ifndef CITAS_H
#define CITAS_H
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class Citas{
  private:
    string dni_; //00000000A
    string nombre_; //primerNombre,segundoNombre -----> Antonio,Manuel
    string apellidos_; //primerApellido,segundoApellido -----> Lopez,Ortega
    string direccion_; // tipo(calle,avenida..),nombre,numero,escalera..
    int telefono_; //000000000
    string nacimiento_; // DD/MM/AAAA -----> 01/01/1999
    string seguro_; //si o no
    string fecha_; // DD/MM/AAAA -----> 01/01/1999
    string hora_; // Ejemplo: 18:00
  public:
    Citas();
    void asignarcita(string dni);
    void modificarcita(string nombre,string apellido,string dni,string fecha,string hora);
    void anularcita(string dni);
    void mostrarcitas();
};

#endif
