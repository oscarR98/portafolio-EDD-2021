#include <iostream>

void calcularPromedio();

int main() {
	
	using namespace std;
	
	cout << "Programa para calcular el promedio de los numeros ingresados \n";
	calcularPromedio();
	
	return  0;
}

void calcularPromedio() {
	int i, n;
	float suma, num, promedio;
	
	std::cout << "Ingrese la cantidad de numeros a promediar: ";
	std::cin >> n;
	
	for (i=0; i < n; i++) {
		std::cout << "Ingrese el numero: ";
		std::cin >> num;
		suma = suma + num;
	}
	
	promedio = suma/n;
	std::cout << "El promedio de los numeros ingresados es: " << promedio;
}