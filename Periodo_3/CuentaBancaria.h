//Oscar Fernando Pineda Rojas PR100617

#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria{
	
private:
	string nombreTitular;
	double saldo;
	string numeroCuenta;
		
public:
	CuentaBancaria();
	CuentaBancaria(string num, string titular, double saldo);
	//GETS
	double getSaldo();
	string getNumeroCuenta();
	string getNombreTitular();
	//Otros Metodos
	void depositar(double importeDeposito);
	void retirar(double importeRetiro);
};
		
CuentaBancaria::CuentaBancaria(string num, string titular, double saldo){
	if (saldo < 0 ){
		this -> saldo = 0.00;
	}else {
		this -> saldo = saldo;
	}
	this ->numeroCuenta = num;
	this ->nombreTitular = titular;
}

string CuentaBancaria::getNombreTitular(){
	return this ->nombreTitular;
}

string CuentaBancaria::getNumeroCuenta(){
	return this ->numeroCuenta;
}

double CuentaBancaria::getSaldo(){
	return this ->saldo;
}
	

void CuentaBancaria::depositar(double importeDeposito){
	if (importeDeposito > 0){
		this ->saldo += importeDeposito;
	}else{
		cout << "! - IMPORTE NO VALIDO - !" << endl;
	}
}		

void CuentaBancaria::retirar(double importeRetiro){
	if (importeRetiro > 0 && importeRetiro <= this ->saldo){
		this ->saldo -= importeRetiro;
	}else{
		cout << "! - IMPORTE NO VALIDO - !" << endl;
	}
}

	
