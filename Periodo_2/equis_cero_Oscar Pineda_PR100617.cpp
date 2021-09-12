//Oscar Fernando Pineda Rojas PR100617
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

const int Lado = 3;

//Prototipos de funciones
void imprimirTablero(char tablero[][Lado]);
int marcarCasillaJugador(char tablero[][Lado]);
int leerNumero(string indicacion, string mensajeError, int min, int max);
int marcarCasillaComputadora(char tablero[][Lado]);
char ganadorFilas(char tablero[][Lado]);
char ganadorColumnas(char tablero[][Lado]);
char ganadorDiagonales(char tablero[][Lado]);
char determinarGanador(char tablero[][Lado]);
void jugar();

int main() {
	char jugarDeNuevo;
	srand(time(0)); //inicializa la semilla de los numeros aleatorios
	do {
		jugar();
		cout << "Desea jugar de nuevo (S|n)? ";
		cin >> jugarDeNuevo;
		cout << endl;
	} while (toupper(jugarDeNuevo) == 'S');
	
	return 0;
}

void jugar() {
	char tablero[Lado][Lado] = {};
	char ganador = 0;
	
	cout << "Juego de equis-cero" << endl;
	int casillasLibres = Lado * Lado;
	bool turnoJugador = true;
	imprimirTablero(tablero);
	
	while (casillasLibres > 0 && ganador == 0) {
		if (turnoJugador) {
			casillasLibres -= marcarCasillaJugador(tablero);
		} else {
			casillasLibres -= marcarCasillaComputadora(tablero);
		}
		turnoJugador = !turnoJugador; //Turno del otro jugador
		ganador = determinarGanador(tablero);
	}
	switch (ganador) {
		case 'X':
			cout << "Felicidades, usted ha ganado!!" << endl;
			break;
		case '0':
			cout << "La computadora gana. Mas suerte a la proxima :(" << endl;
			break;
			default:
				cout << "Empate!" << endl;
	}
}

void imprimirTablero(char tablero[][Lado]) {
	// Cuente los espacios usando los puntos
	// Guia: ...............   ...............
	cout << "\n     0   1   2\n    -----------" << endl;
	for (int fila = 0; fila < Lado; fila++) {
		cout << " " << fila << " |";
		for (int columna = 0; columna < Lado; columna++){
		cout << " " << tablero[fila][columna] << " |";
	}
	// Guia: .................
	cout << "\n    -----------" << endl;
	}
	cout << endl;
}

int leerNumero(string indicacion, string mensajeError, int min, int max) {
	int numero;
	cout << indicacion << ": ";
	
	//Valida que la entrada sea un entero
	while (!(cin >> numero) || (numero < min || numero >= max)) {
		cin.clear(); //Limpia la enntrada estandar
		cin.ignore(10000, '\n'); //Descarta la entrada hasta encontrar un salto de línea
		cout << mensajeError << endl; //Muestra un mensaje de error
		cout << indicacion << ": "; // Le da otra oportunidad al usuario
	}
	
	return numero;
}

int marcarCasillaJugador(char tablero[][Lado]) {
	int fila, columna;
	cout << "Jugador:" << endl;
	string mensaje = "Ingrese un valor entre 0 y " + to_string(Lado);
	fila = leerNumero("Fila", mensaje, 0, Lado);
	columna = leerNumero("Columna", mensaje, 0, Lado);
	while (tablero[fila][columna] != 0) {
		cout << "Casilla ocupada. Intente de nuevo" << endl;
		fila = leerNumero("Fila", mensaje, 0, Lado);
		columna = leerNumero("Columna", mensaje, 0, Lado);
	}
	tablero[fila][columna] = 'X';
	imprimirTablero(tablero);
	return 1;
}

int marcarCasillaComputadora(char tablero[][Lado]) {
	int fila, columna;
	fila = rand() % Lado;
	columna = rand() % Lado;
	while (tablero[fila][columna] != 0) {
		fila = rand() % Lado;
		columna = rand() % Lado;
	}
	tablero[fila][columna] = '0';
	cout << "Computadora:" << endl;
	imprimirTablero(tablero);
	return 1;
}

char determinarGanador(char tablero[][Lado]) {
	char ganador;
	
	//Ganador por filas?
	ganador = ganadorFilas(tablero);
	
	//Ganador por columnas?
	if (ganador == 0)
	ganador = ganadorColumnas(tablero);
	
	//Ganador por diagonales?
	if (ganador == 0)
	ganador = ganadorDiagonales(tablero);
	
	return ganador;
}

char ganadorFilas(char tablero[][Lado]) {
	for (int fila = 0; fila < Lado; fila++) {
		// Primer caracter de la fila
		char caracter = tablero[fila][0];
		int veces = 0;
		if (caracter != 0) {
			//Contar cuantas veces aparece el caracter en la fila
			for (int columna = 0; columna < Lado; columna++) {
				if (tablero[fila][columna] == caracter) {
					veces++;
				}
			}
			if (veces == Lado) {
				return caracter;
			}
		}
	}
	return 0;
}

char ganadorColumnas(char tablero[][Lado]) {
	for (int columna = 0; columna < Lado; columna++) {
		// Primer caracter de la columna
		char caracter = tablero[0][columna];
		int veces = 0;
		if (caracter != 0) {
			//Contar cuantas veces aparece el caracter en la columna
			for (int fila = 0; fila < Lado; fila++) {
				if (tablero[fila][columna] == caracter) {
					veces++;
				}
			}
			if (veces == Lado) {
				return caracter;
			}
		}
	}
	return 0;
}

char ganadorDiagonales(char tablero[][Lado]) {
	char caracter;
	int veces;
	
	//Diagonal de izquierda a derecha (\)
	caracter = tablero[0][0];
	veces = 0;
	if (caracter != 0) {
		for (int i = 0; i < Lado; i++)
			if (tablero[i][i] == caracter)
				veces++;
		if (veces == Lado)
			return caracter;
	}
	
	// Diagonal de derecha a izquierda (/)
	caracter = tablero[0][Lado -1];
	veces = 0;
	if (caracter != 0) {
		for (int i = 0; i < Lado; i++)
			if (tablero[i][Lado - 1 - i] == caracter)
				veces++;
		if (veces == Lado)
			return caracter;
	}
	
	return 0;
}