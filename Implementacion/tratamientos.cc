#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "tratamientos.h"

using namespace std;

Tratamientos::Tratamientos(){
  nombre_="";
  apellidos_="";
  dni_="";
  diagnostico_="";
  medicamento_="";
}

void Tratamientos::asignartratamiento(string dni){
  ofstream guardar;
  ifstream leer;
  guardar.open("tratamiento.txt",ios::app);
  leer.open("paciente.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar a un paciente y asignar tratamiento: "<<endl;
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
      cout << "Introduce el diagnostico y el medicamento correspondiente al tratamiento"<<endl;
      cout << "Diagnostico: ";
      cin >> diagnostico_;
      cout << "medicamento: ";
      cin >> medicamento_;
      guardar << dni_<<" " << nombre_ <<" "<< apellidos_<<" " << diagnostico_ <<" "<< medicamento_<<endl;
      cout << "Diagnostico y tratamiento añadidos"<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout<<"Paciente no encontrado"<<endl;
  }
  leer.close();
  guardar.close();
}
void Tratamientos::modificartratamiento( string dni,string nombre,string apellidos, string medicamento, string diagnostico){
  ofstream temp;
  temp.open("temporal.txt",ios::app);
  ifstream leer;
  leer.open("tratamiento.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar a un paciente y modificar tratamiento: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>diagnostico_>>medicamento_;
    if(dni_==dni){
      encontrado=true;
      cout << "Paciente existente en nuestra base de datos"<<endl;
      cout << endl;
      cout << "----------------------------------------------"<<endl;
      cout << "Introduzca los datos del paciente para confirmacion"<<endl;
      cout << "Nombre paciente(primerNombre,SegundoNombre): ";
      cin >> nombre;
      cout << "Apellidos paciente(primerApellido,segundoApellido): ";
      cin >> apellidos;
      cout << "Introduce el nuevo diagnostico y el nuevo medicamento del paciente"<<endl;
      cout << "Nuevo diagnostico: ";
      cin >> diagnostico;
      cout << "Nuevo medicamento: ";
      cin >> medicamento;
      temp << dni<<" " << nombre<<" "<< apellidos<<" " << diagnostico <<" "<< medicamento<<endl;
      cout << "Diagnostico y medicamento modificados"<<endl;
    }
    else{
      temp << dni_ <<" "<< nombre_ <<" "<< apellidos_<<" " << diagnostico_ <<" "<< medicamento_<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout<<"Paciente no encontrado"<<endl;
  }
  leer.close();
  temp.close();
  remove("tratamiento.txt");
  rename("temporal.txt","tratamiento.txt");
}

void Tratamientos::anulartratamiento(string dni){
  ifstream leer;
  ofstream temp; // fichero temporal donde se acabaran guardando los datos
  leer.open("tratamiento.txt");
  temp.open("temporal.txt",ios::app);
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para anular: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>diagnostico_>>medicamento_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente"<<endl;
      cout << "Dni: "<< dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<< apellidos_ <<endl;
      cout << "Diagnostico: "<< diagnostico_ <<endl;
      cout << "Medicamento: "<< medicamento_ <<endl;
      cout << endl;
      cout << "Eliminado"<<endl;
    }
    else{
      temp<<dni_<<" "<<nombre_<<" "<<apellidos_<<" "<<diagnostico_<<" "<<medicamento_<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout << "Paciente no encontrado"<<endl;
  }
  leer.close();
  temp.close();
  remove("tratamiento.txt");
  rename("temporal.txt","tratamiento.txt");
}

void Tratamientos::mostrartratamientos(){
  ifstream leer;
  leer.open("tratamiento.txt");
  leer>>dni_;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>diagnostico_>>medicamento_;
    cout << "Dni: "<<dni_ <<endl;
    cout << "Nombre: "<< nombre_ <<endl;
    cout << "Apellidos: "<<apellidos_ <<endl;
    cout << "Diagnostico: "<< diagnostico_ <<endl;
    cout << "Medicamento: "<<medicamento_ <<endl;
    cout<<endl;
    leer>>dni_;
  }
  leer.close();
}
