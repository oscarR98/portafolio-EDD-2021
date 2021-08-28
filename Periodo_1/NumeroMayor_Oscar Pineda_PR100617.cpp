#include <iostream>

void calcularMayor(float n1, float n2, float n3, float n4, float n5);

int main(){
	
	using namespace std;
	
	float n1, n2, n3, n4, n5;
	
	cout << "Calculo del mayor de los numeros. \n";
	cout << "\n Ingrese el primer numero: ";
	cin >> n1;
	cout << "\n Ingrese el segundo numero: ";
	cin >> n2;
	cout << "\n Ingrese el tercer numero: ";
	cin >> n3;
	cout << "\n Ingrese el cuarto numero: ";
	cin >> n4;
	cout << "\n Ingrese el quinto numero: ";
	cin >> n5;
	
	calcularMayor(n1, n2, n3, n4, n5);
	
	return 0;
}

void calcularMayor(float n1, float n2, float n3, float n4, float n5) {
	float mayor;
	mayor = n1;
	
	if (n2 > mayor) {
		mayor = n2;
	} if (n3 > mayor) {
		mayor = n3;
	} if (n4 > mayor) {
		mayor = n4;
	} if (n5 > mayor) {
		mayor = n5;
	}
	std::cout << "\n El mayor de los numeros ingresados es: " << mayor;
}