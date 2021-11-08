//Oscar Fernando Pineda Rojas PR100617

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona{
	
private:
	string nombres;
	string apellidos;
	int anioN;
			
public:
	Persona(string nombres, string apellidos, int anioNacimiento);
	string nombreCompleto();
	int edad();
};
	
Persona::Persona(string nombres, string apellidos, int anioNacimiento){
	this-> nombres = nombres;
	this-> apellidos = apellidos;
	this-> anioN = anioN;
}

string Persona::nombreCompleto(){
	string nombreCompleto = this-> nombres + " " + this-> apellidos;
	return nombreCompleto;
}

Persona::edad(){
	
	time_t now = time(0);
	tm* ltm = localtime(&now);
	
	int anioActual = 1900 + ltm->tm_year;
	
	int edad = (anioActual - this-> anioN);
	return edad;
}

int main(){
	string nombres;
	string apellidos;
	int anioN;
	
	cout << "Ingrese sus Nombres: ";
	getline(cin, nombres);
	
	cout << "Ingrese sus Apellidos: ";
	getline(cin, apellidos);
	
	cout << "Ingrese su Anio de Nacimiento: ";
	cin >> anioN;
	
	Persona persona1(nombres, apellidos, anioN);
	cout << endl << "-----Datos De La Persona-----" <<endl;
	cout << "Nombre: " << persona1.nombreCompleto() <<endl;
	cout << "Edad: " << persona1.edad() << endl;
	
	return 0;
}