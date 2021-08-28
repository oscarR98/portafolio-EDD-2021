#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
	int movJug;
	cout << " Juguemos a piedra, papel, tijera, lagarto, spock. Selecciona tu movimiento! \n";
	cout << " 1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock \n  \n Selecciona tu movimiento: ";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand() % 5 + 1;
	switch (numMov) {
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;			
	}
	cout << " La computadora escogio: " << movComp << endl;
	if (movJug == numMov){
		cout << " Empate \n";
	}  else if ( (movJug == 3) && (numMov == 2) ) {
		cout << " Las tijeras cortan el papel. Ganaste! \n";
	}  else if ( (movJug == 2) && (numMov == 1) ) {
		cout << " El papel cubre la piedra. Ganaste! \n";
	}  else if ( (movJug == 1) && (numMov == 4) ) {
		cout << " La piedra aplasta al lagarto. Ganaste! \n";	
	}  else if ( (movJug == 4) && (numMov == 5) ) {
		cout << " El lagarto envenena a Spock. Ganaste! \n";
	}  else if ( (movJug == 5) && (numMov == 3) ) {
		cout << " Spock aplasta las tijeras. Ganaste! \n";
	}  else if ( (movJug == 3) && (numMov == 4) ) {
		cout << " Las tijeras decapitan al lagarto. Ganaste! \n";
	}  else if ( (movJug == 4) && (numMov == 2) ) {
		cout << " El lagarto devora el papel. Ganaste! \n";
	}  else if ( (movJug == 2) && (numMov == 5) ) {
		cout << " El papel desaprueba a Spock. Ganaste! \n";
	}  else if ( (movJug == 5) && (numMov == 1) ) {
		cout << " Spock desintegra la piedra. Ganaste! \n";
	}  else if ( (movJug == 1) && (numMov == 3) ) {
		cout << " Piedra aplasta tijera. Ganaste! \n";
	}  else if ( (movJug == 2) && (numMov == 3) ) {
		cout << " Las tijeras cortan el papel. Perdiste! \n";
	}  else if ( (movJug == 1) && (numMov == 2) ) {
		cout << " El papel cubre la piedra. Perdiste! \n";
	}  else if ( (movJug == 4) && (numMov == 1) ) {
		cout << " La piedra aplasta al lagarto. Perdiste! \n";	
	}  else if ( (movJug == 5) && (numMov == 4) ) {
		cout << " El lagarto envenena a Spock. Perdiste! \n";
	}  else if ( (movJug == 3) && (numMov == 5) ) {
		cout << " Spock aplasta las tijeras. Perdiste! \n";
	}  else if ( (movJug == 4) && (numMov == 3) ) {
		cout << " Las tijeras decapitan al lagarto. Perdiste! \n";
	}  else if ( (movJug == 2) && (numMov == 4) ) {
		cout << " El lagarto devora el papel. Perdiste! \n";
	}  else if ( (movJug == 5) && (numMov == 2) ) {
		cout << " El papel desaprueba a Spock. Perdiste! \n";
	}  else if ( (movJug == 1) && (numMov == 5) ) {
		cout << " Spock desintegra la piedra. Perdiste! \n";
	}  else if ( (movJug == 3) && (numMov == 1) ) {
		cout << " Piedra aplasta tijera. Perdiste! \n";
	}

	cout << "\n Gracias por jugar! \n";
	cout << " \n Autor: Oscar Fernando Pineda Rojas PR100617 ";
	return 0;
}