//Oscar Fernando Pineda Rojas PR100617

#include "CuentaBancaria.h"

using namespace std;

int main(){
	
	CuentaBancaria miCuenta("A-480920", "Jonathan Joestar", 2900.00);
	cout << "TITULAR: " << miCuenta.getNombreTitular() << endl;
	cout << "# CUENTA " << miCuenta.getNumeroCuenta() << endl;
	cout << "SALDO: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	CuentaBancaria miAmigo("C-165426", "Arale Guitierrez", 784661.00);
	cout << "TITULAR: " << miAmigo.getNombreTitular() << endl;
	cout << "# CUENTA " << miAmigo.getNumeroCuenta() << endl;
	cout << "SALDO: $" << miAmigo.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	CuentaBancaria cuentaNoValida("A-354698", "John Cena", -500.00);
	cout << "TITULAR: " << cuentaNoValida.getNombreTitular() << endl;
	cout << "# CUENTA " << cuentaNoValida.getNumeroCuenta() << endl;
	cout << "SALDO: $" << cuentaNoValida.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "Quiero retirar $84 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "SALDO DISPONIBLE: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(84);
	cout << "NUEVO SALDO: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "Quiero retirar $3500 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "SALDO DISPONIBLE: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(3500);
	cout << "NUEVO SALDO: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "Quiero retirar -$725 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "SALDO DISPONIBLE: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(-725);
	cout << "NUEVO SALDO: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "Quiero depositar $125000 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "SALDO DISPONIBLE: $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(125000);
	cout << "NUEVO SALDO: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "Quiero depositar -$5000 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "SALDO DISPONIBLE: $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(-5000);
	cout << "NUEVO SALDO: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	return 0;
	
}