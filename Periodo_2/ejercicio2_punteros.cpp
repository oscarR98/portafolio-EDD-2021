#include <iostream>

using namespace std;

int main() {
	int *p; 
	int i; 
	int k;
	i = 42; 
	k = i; 
	p = &i;
	
	*p = 75;
	cout << "respuesta es: " << i << endl;
}