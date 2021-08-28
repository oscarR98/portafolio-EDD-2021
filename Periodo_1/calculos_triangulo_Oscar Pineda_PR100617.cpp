#include <iostream>
#include <math.h>

//prototipos
void definirTipoTriangulo(double a, double b, double c);
void calcularArea(double a, double b, double c);

	int main(){
	using namespace std;
	double a; //Primer lado
	double b; //Segundo lado
	double c; //Tercer lado
	cout << "Ingresar los lados del triangulo \n";
	
	cout << "\n Ingresar el lado numero 1: ";
	cin >> a;
	cout << "\n Ingresar el lado numero 2: ";
	cin>> b;
	cout << "\n Ingresar el lado numero 3: ";
	cin >> c;
	
	definirTipoTriangulo(a, b, c);
	calcularArea(a, b, c);
	return 0;
}

	void definirTipoTriangulo(double a, double b, double c) {
	if (a == b && a == c ){
		std::cout << "\n El triangulo es equilatero \n";
	} else if (a == b || a == c || b == c) {
		std::cout << "\n El triangulo es isosceles \n";
	} else {
		std::cout << "\n El triangulo es escaleno \n";
	}
	
}

	void calcularArea (double a, double b, double c) {
		
		double area = 0;
		double s = 0;  
		
		s = (a+b+c)/2; //Semiperimetro del triangulo segun la fórmula de Herón
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		
		std::cout << " El area del triangulo es: " << area;
	}