#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "citas.h"

using namespace std;

Citas::Citas(){
  nombre_="";
  apellidos_="";
  dni_="";
  fecha_="";
  hora_="";
}

void Citas::asignarcita(string dni){
  ofstream guardar;
  ifstream leer;
  guardar.open("citas.txt",ios::app);
  leer.open("paciente.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar a un paciente y asignar cita: "<<endl;
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
      cout << "Introduce la fecha y la hora de la cita"<<endl;
      cout << "Fecha: ";
      cin >> fecha_;
      cout << "Hora: ";
      cin >> hora_;
      guardar << dni_<<" " << nombre_ <<" "<< apellidos_<<" " << fecha_ <<" "<< hora_<<endl;
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

void Citas::modificarcita(string dni,string nombre,string apellidos, string fecha, string hora){
  ofstream temp;
  temp.open("temporal.txt",ios::app);
  ifstream leer;
  leer.open("citas.txt");
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para buscar a un paciente y modificar cita: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>fecha_>>hora_;
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
      cout << "Introduce la nueva fecha y la nueva hora de la cita"<<endl;
      cout << "Nueva Fecha: ";
      cin >> fecha;
      cout << "Nueva Hora: ";
      cin >> hora;
      temp << dni<<" " << nombre<<" "<< apellidos<<" " << fecha <<" "<< hora<<endl;
      cout << "Fecha y hora modificadas"<<endl;
    }
    else{
      temp << dni_ <<" "<< nombre_ <<" "<< apellidos_<<" " << fecha_ <<" "<< hora_<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout<<"Paciente no encontrado"<<endl;
  }
  leer.close();
  temp.close();
  remove("citas.txt");
  rename("temporal.txt","citas.txt");
}

void Citas::anularcita(string dni){
  ifstream leer;
  ofstream temp; // fichero temporal donde se acabaran guardando los datos
  leer.open("citas.txt");
  temp.open("temporal.txt",ios::app);
  leer>>dni_;
  bool encontrado=false;
  cout<<"Ingrese el dni para eliminar: "<<endl;
  cin >> dni;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>fecha_>>hora_;
    if(dni_==dni){
      encontrado=true;
      cout << "Estos son los datos del paciente"<<endl;
      cout << "Dni: "<< dni_ <<endl;
      cout << "Nombre: "<< nombre_ <<endl;
      cout << "Apellidos: "<< apellidos_ <<endl;
      cout << "Fecha: "<< fecha_ <<endl;
      cout << "Hora: "<< hora_ <<endl;
      cout << endl;
      cout << "Eliminado"<<endl;
    }
    else{
      temp<<dni_<<" "<<nombre_<<" "<<apellidos_<<" "<<fecha_<<" "<<hora_<<endl;
    }
    leer>>dni_;
  }
  if(encontrado==false){
    cout << "Paciente no encontrado"<<endl;
  }
  leer.close();
  temp.close();
  remove("citas.txt");
  rename("temporal.txt","citas.txt");
}

void Citas::mostrarcitas(){
  ifstream leer;
  leer.open("citas.txt");
  leer>>dni_;
  while(!leer.eof()){
    leer>>nombre_>>apellidos_>>fecha_>>hora_;
    cout << "Dni: "<<dni_ <<endl;
    cout << "Nombre: "<< nombre_ <<endl;
    cout << "Apellidos: "<<apellidos_ <<endl;
    cout << "Fecha: "<< fecha_ <<endl;
    cout << "Hora: "<<hora_ <<endl;
    cout<<endl;
    leer>>dni_;
  }
  leer.close();
}
