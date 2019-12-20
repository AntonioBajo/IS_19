#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Historial{
  private:
    string nombre_; //primerNombre,segundoNombre -----> Antonio,Manuel
    string apellidos_; //primerApellido,segundoApellido -----> Lopez,Ortega
    string dni_; //00000000A
    string direccion_; //tipo(calle,avenida..),nombre,numero,escalera..
    string nacimiento_; // DD/MM/AAAA -----> 01/01/1999
    string seguro_; // si o no
    int telefono_; // 000000000
    string fecha_; // DD/MM/AAAA -----> 01/01/2020
    string hora_; // 17:00
    string diagnostico_; // Dolor_de_cabeza
    string medicamento_; // Ibuprofeno
  public:
    Historial();
    void mostrarhistorial(string dni);
    void anadirentradahistorial(string dni);
};

#endif
