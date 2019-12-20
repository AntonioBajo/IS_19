#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "historial.h"

using namespace std;

Historial::Historial(){
  nombre_="";
  apellidos_="";
  dni_="";
  fecha_="";
  hora_="";
  diagnostico_="";
  medicamento_="";
}

void Historial::anadirentradahistorial(string dni){
  ofstream guardar;
  ifstream leer;
  guardar.open("historial.txt",ios::app);
  leer.open("paciente.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar a un paciente y actualizar su historial: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>direccion_>>telefono_>>nacimiento_>>seguro_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente"<<endl;
      cout << "Dni: "<<dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<<apellidos_ <<endl;
      cout << "Direccion: "<<direccion_<<endl;
      cout << "Telefono: "<<telefono_<<endl;
      cout << "Nacimiento: "<<nacimiento_ << endl;
      cout << "Seguro: "<<seguro_<<endl;
      cout << endl;
      cout << "----------------------------------------------"<<endl;
      cout << "Introduce los nuevos datos del paciente"<<endl;
      cout << "Fecha: ";
      cin >> fecha_;
      cout << "Hora: ";
      cin >> hora_;
      cout << "Diagnostico: ";
      cin >> diagnostico_;
      cout << "Medicamento: ";
      cin >> medicamento_;
      guardar << dni_<<" " << nombre_ <<" "<< apellidos_<<" " << fecha_ <<" "<< hora_<<" "<<diagnostico_<<" "<<medicamento_<<endl;
      cout << "Fecha y hora añadidas"<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout<<"Paciente no encontrado"<<endl;
  }
  leer.close();
  guardar.close();
}

void Historial::mostrarhistorial(string dni){
  ifstream leer;
  leer.open("historial.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>fecha_>>hora_>>diagnostico_>>medicamento_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente"<<endl;
      cout << "Dni: "<<dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<<apellidos_ <<endl;
      cout << "Fecha: "<< fecha_ <<endl;
      cout << "Hora: "<<hora_ <<endl;
      cout << "Diagnostico: "<<diagnostico_ <<endl;
      cout << "Medicamento: "<<medicamento_<<endl;
      cout << endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout << "Paciente no encontrado"<<endl;
  }
  leer.close();
}
