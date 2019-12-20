#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "paciente.h"


Paciente::Paciente(){
  nombre_="";
  apellidos_="";
  dni_="";
  direccion_="";
  telefono_=0;
  nacimiento_="";
  seguro_="";
}

void Paciente::anadirpaciente(string nombre, string apellidos, string dni, string direccion, int telefono, string nacimiento, string seguro){
  ofstream guardar;
  guardar.open("paciente.txt",ios::app);//ios::app, para que el fichero no se sobreescriba.
  cout << "Introduzca el dni del paciente: ";
  cin >> dni_;;
  cout << "Introduzca el nombre del paciente(primerNombre,SegundoNombre): ";
  cin >> nombre_;
  cout << "Introduzca los apellidos del paciente(primerApellido,segundoApellido): ";
  cin >> apellidos_;
  cout << "Introduzca la direccion del paciente(tipo(calle,avenida..),nombre,numero,escalera): ";
  cin >> direccion_;
  cout << "Introduzca el telefono del paciente: ";
  cin >> telefono_;
  cout << "Introduzca la fecha de nacimiento del paciente: ";
  cin >> nacimiento_;
  cout << "Introduzca si el paciente tiene seguro o no : ";
  cin >> seguro_;
  guardar<< dni_ <<" "<<nombre_<<" "<<apellidos_<<" "<<direccion_<<" "<<telefono_<<" "<<nacimiento_<<" "<<seguro_<<endl;
}

void Paciente::editarpaciente(string nombre, string apellidos, string dni, string direccion, int telefono, string nacimiento, string seguro){
  ifstream leer;
  ofstream temp;
  leer.open("paciente.txt");
  temp.open("temporal.txt",ios::app);
  leer>>dni_;
  bool encontrado=false;
  cout<<"ingrese el dni para buscar y modificar: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>direccion_>>telefono_>>nacimiento_>>seguro_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente: "<<endl;
      cout << "Dni: "<<dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<<apellidos_ <<endl;
      cout << "Direccion: "<< direccion_ <<endl;
      cout << "Telefono: "<<telefono_ <<endl;
      cout << "Nacimiento: "<<nacimiento_ <<endl;
      cout << "Seguro: "<<seguro_<<endl;
      cout << endl;
      cout << "----------------------------------------"<<endl;
      cout << "Introduzca los nuevos datos del paciente"<<endl;
      cout << "Introduzca el nuevo dni del paciente: ";
      cin >> dni;
      cout << "Introduzca el nuevo nombre del paciente(primerNombre,SegundoNombre): ";
      cin >> nombre;
      cout << "Introduzca los nuevos apellidos del paciente(primerApellido,segundoApellido): ";
      cin >> apellidos;
      cout << "Introduzca la nueva direccion del paciente(tipo(calle,avenida..),nombre,numero,escalera): ";
      cin >> direccion;
      cout << "Introduzca el nuevo telefono del paciente: ";
      cin >> telefono;
      cout << "Introduzca la nueva fecha de nacimiento del paciente: ";
      cin >> nacimiento;
      cout << "Introduzca si el paciente tiene seguro o no : ";
      cin >> seguro;
      temp << dni <<" "<<nombre<<" "<<apellidos<<" "<<direccion<<" "<<telefono<<" "<<nacimiento<<" "<<seguro<<endl;
      cout << "Modificado"<<endl;
      cout << "----------------------------------------"<<endl;
    }
    else{
      temp << dni_ <<" "<<nombre_<<" "<<apellidos_<<" "<<direccion_<<" "<<telefono_<<" "<<nacimiento_<<" "<<seguro_<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout<<"Paciente no encontrado"<<endl;
  }
  leer.close();
  temp.close();
  remove("paciente.txt");
  rename("temporal.txt","paciente.txt");
}

void Paciente::consultarpaciente(string dni){
  ifstream leer;
  leer.open("paciente.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>direccion_>>telefono_>>nacimiento_>>seguro_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente"<<endl;
      cout << "Dni: "<<dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<<apellidos_ <<endl;
      cout << "Direccion: "<< direccion_ <<endl;
      cout << "Telefono: "<<telefono_ <<endl;
      cout << "Nacimiento: "<<nacimiento_ <<endl;
      cout << "Seguro: "<<seguro_<<endl;
      cout << endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout << "Paciente no encontrado"<<endl;
  }
  leer.close();
}


void Paciente::borrarpaciente(string dni){
  ifstream leer;
  ofstream temp; // fichero temporal donde se acabaran guardando los datos
  leer.open("paciente.txt");
  temp.open("temporal.txt",ios::app);
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para eliminar: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>direccion_>>telefono_>>nacimiento_>>seguro_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente"<<endl;
      cout << "Dni: "<< dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<< apellidos_ <<endl;
      cout << "Direccion: "<< direccion_ <<endl;
      cout << "Telefono: "<< telefono_ <<endl;
      cout << "Nacimiento: "<< nacimiento_ <<endl;
      cout << "Seguro: "<< seguro_<<endl;
      cout << endl;
      cout << "Eliminado"<<endl;
    }
    else{
      temp<<dni_<<" "<<nombre_<<" "<<apellidos_<<" "<<direccion_<<" "<<telefono_<<" "<<nacimiento_<<" "<<seguro_<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout << "Paciente no encontrado"<<endl;
  }
  leer.close();
  temp.close();
  remove("paciente.txt");
  rename("temporal.txt","paciente.txt");//al fichero que hemos creado como temporal se le renombra como nuevo fichero donde se encuentran los datos de los pacientes
}

void Paciente::mostrarpacientes(){
  ifstream leer;
  leer.open("paciente.txt");
  leer>>dni_;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>direccion_>>telefono_>>nacimiento_>>seguro_;
    cout << "Dni: "<<dni_ <<endl;
    cout << "Nombre: "<< nombre_ <<endl;
    cout << "Apellidos: "<<apellidos_ <<endl;
    cout << "Direccion: "<< direccion_ <<endl;
    cout << "Telefono: "<<telefono_ <<endl;
    cout << "Nacimiento: "<<nacimiento_ <<endl;
    cout << "Seguro: "<<seguro_<<endl;
    cout<<endl;
    leer>>dni_;
  }
  leer.close();
}
