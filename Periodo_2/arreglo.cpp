#include <iostream>
#include <array>

using namespace std;

const int Tamanio = 10; // Numero de elementos en el arreglo

// Imprime hasta num_elementos de un arreglo
void imprimirArreglo(array<int, Tamanio> &arr, int num_elementos) {
	for (int i = 0; i < arr.size() && i < num_elementos; i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	array<int, Tamanio> miArreglo;
	for (int i = 0; i < Tamanio; i++) {
		cin >> miArreglo[i];
	}
	cout << "Cantidad de elementos: " << miArreglo.size() << endl;
	cout << "Primeros 10 elementos: " << endl;
	imprimirArreglo(miArreglo, 10);
	
	return 0;
}