//Oscar Fernando Pineda Rojas PR100617

#include "pila.hpp"
#include "cola.hpp"
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

Pila<char> crearPila(string expresion){
	Pila<char> pila;
	for(size_t i=0; i < expresion.length(); i++){
		char caracter = expresion[i];
		pila.push(caracter);
	}
	return pila;
}

Cola<char> crearCola(string expresion){
	Cola<char> cola;
	for(size_t i=0; i < expresion.length(); i++){
		char caracter = expresion[i];
		cola.enqueue(caracter);
	}
	return cola;
}

void comprobarIgualdad(Pila<char> pila, Cola<char> cola, int tamanioPalabra){
	int comprobado;
	for(size_t i=0; i < tamanioPalabra; i++){
		if(cola.dequeue() == pila.pop()){
			comprobado++;
		}
	}
	if(comprobado == tamanioPalabra){
		cout << "	-------------" << endl;
		cout << "	Es palindromo" << endl;
		cout << "	-------------" << endl;
	}else{
		cout << "	----------------" << endl;
		cout << "	No es palindromo" << endl;
		cout << "	----------------" << endl;
	}
}

int main(){
	string palabra;
	int tamanio;
	bool validar;
	Pila <char> pila;
	Cola <char> cola;
	cout << "Ingrese una palabra para saber si es palindromo: \n" << endl;
	cin >> palabra;
	if (validar = all_of(palabra.begin(), palabra.end(), ::isalpha)) {
		pila = crearPila(palabra);
		cola = crearCola(palabra);
		tamanio = palabra.length();
	} else{
		cout << "Hay caracteres no validos en la palabra. Por favor ingrese solamente caracteres alfabeticos. \n" << endl; 
	}
	comprobarIgualdad(pila,cola,palabra.length());

	return 0;
}