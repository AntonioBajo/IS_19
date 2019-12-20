#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <iostream>
#include "paciente.h"
#include "citas.h"
#include "tratamientos.h"
#include "historial.h"

using namespace std;

int main(){
  string nombre, apellidos, dni, direccion, nacimiento, seguro, fecha, hora, medicamento, diagnostico;
  int telefono, resp;
  int opcion;
  Paciente aux;
  Citas ana;
  Tratamientos trat;
  Historial hist;
  while (true){
    cout << "[1] Añadir paciente"<<endl;
    cout << "[2] Editar paciente"<<endl;
    cout << "[3] Consultar paciente"<<endl;
    cout << "[4] Borrar paciente"<<endl;
    cout << "[5] Mostrar pacientes"<<endl;
    cout << "[6] Asignar cita"<<endl;
    cout << "[7] Modificar cita"<<endl;
    cout << "[8] Anular cita"<<endl;
    cout << "]9] Mostrar citas"<<endl;
    cout << "[10] Asignar tratamiento"<<endl;
    cout << "[11] Modificar tratamiento"<<endl;
    cout << "[12] Borrar tratamiento"<<endl;
    cout << "[13] Mostrar tratamientos"<<endl;
    cout << "[14] Añadir historial del paciente"<<endl;
    cout << "[15] Mostrar historial del paciente"<<endl;
    cout << "[16] Salir"<<endl;
    cout << "Ingrese opcion"<<endl;
    cin >> opcion;

    switch(opcion){
      case 1:
      {
        aux.anadirpaciente(nombre, apellidos, dni, direccion,telefono, nacimiento, seguro);
        break;
      }
      case 2:
      {
        aux.editarpaciente(nombre, apellidos, dni, direccion, telefono, nacimiento, seguro);
        break;
      }
      case 3:
      {
        aux.consultarpaciente(dni);
        break;
      }
      case 4:
      {
        aux.borrarpaciente(dni);
        break;
      }
      case 5:
      {
        aux.mostrarpacientes();
        break;
      }
      case 6:
      {
        ana.asignarcita(dni);
        break;
      }
      case 7:
      {
        ana.modificarcita(dni,nombre,apellidos,fecha,hora);
        break;
      }
      case 8:
      {
        ana.anularcita(dni);
        break;
      }
      case 9:
      {
        ana.mostrarcitas();
        break;
      }
      case 10:
      {
        trat.asignartratamiento(dni);
        break;
      }
      case 11:
      {
        cout << "¿Está el tratamiento en curso?(si la respuesta es sí pulse 1, sino cualquier otro numero) ";
        cin >> resp;
        if(resp==1){
          trat.modificartratamiento(dni,nombre,apellidos,diagnostico,medicamento);
        }
        else{
          cout <<"El tratamiento debe estar en curso para ser modificado"<<endl;
        }
        break;
      }
      case 12:
      {
        cout << "¿Está el tratamiento en curso?(si la respuesta es sí pulse 1, sino cualquier otro numero) ";
        cin >> resp;
        if(resp==1){
          trat.anulartratamiento(dni);
        }
        else{
          cout <<"El tratamiento debe estar en curso para ser anulado"<<endl;
        }
        break;
      }
      case 13:
      {
        trat.mostrartratamientos();
        break;
      }
      case 14:
      {
        hist.anadirentradahistorial(dni);
        break;
      }
      case 15:
      {
        hist.mostrarhistorial(dni);
        break;
      }
      case 16:
      {
        return 0;
      }
    }
  }
}
