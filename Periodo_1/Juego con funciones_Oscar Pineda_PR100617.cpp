#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main() {
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}

//Implementación
std::string generarMovimientoComputadora() {
	std::string movimiento;
	int numeroAleatorio;
	
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	
	switch (numeroAleatorio)
	{
	case 1:
		movimiento = "piedra";
		break;
	case 2:
		movimiento = "papel";
		break;
	case 3:
		movimiento = "tijera";
		break;
	case 4:
		movimiento = "lagarto";
		break;
	case 5:
		movimiento = "spock";
		break;				
	}
	
	std::cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador() {
	using namespace std;
	string movimiento;
	
	cout << "Escoja su movimiento (ingrese el nombre del movimiento) \n 1. piedra \n 2. papel \n 3. tijera \n 4. lagarto \n 5. spock \n \n Elijo: ";
	cin >> movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador) {
	if (computadora == jugador) {
		std::cout << "Empate! \n";
	}
	else if (jugador == "piedra") {
		procesarEntradaJugadorPiedra(computadora);
	}
	else if (jugador == "papel") {
		procesarEntradaJugadorPapel(computadora);
	}
	else if (jugador == "tijera") {
		procesarEntradaJugadorTijera(computadora);
	}
	else if (jugador == "lagarto") {
		procesarEntradaJugadorLagarto(computadora);
	}
	else if (jugador == "spock") {
		procesarEntradaJugadorSpock(computadora);
	}
	else {
		std::cout << "Entrada no valida. Por favor ingresar una de las opciones mencionadas. \n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora) {
	if (computadora == "papel") {
		std::cout << "Papel cubre la piedra. La computadora gana! \n";
	}
	else if (computadora == "spock") {
		std::cout << "Spock desintegra la piedra. La computadora gana! \n";
	}
	else if (computadora == "tijera") {
		std::cout << "Piedra rompe las tijeras. El jugador gana! \n";
	}
	else if (computadora == "lagarto") {
		std::cout  << "Piedra aplasta al lagarto. El jugador gana! \n";
	}		
}

void procesarEntradaJugadorPapel(std::string computadora) {
	if (computadora == "tijera") {
		std::cout << "Tijera corta el papel. La computadora gana! \n";
	}
	else if (computadora == "lagarto") {
		std::cout << "El lagarto devora el papel. La computadora gana! \n";
	}
	else if (computadora == "piedra") {
		std::cout << "Papel cubre la piedra. El jugador gana! \n";
	}
	else if (computadora == "Spock") {
		std::cout << "El papel desaprueba a Spock. El jugador gana! \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora) {
	if (computadora == "piedra") {
		std::cout << "Piedra aplasta tijera. La computadora gana! \n";
	}
	else if (computadora == "spock") {
		std::cout << "Spock aplasta las tijeras. La computadora gana! \n";
	}
	else if (computadora == "papel") {
		std::cout << "Las tijeras cortan el papel. El jugador gana! \n";
	}
	else if (computadora == "lagarto") {
		std::cout << "Las tijeras decapitan al lagarto. El jugador gana! \n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora) {
	if (computadora == "piedra") {
		std::cout << "Piedra aplasta al lagarto. La computadora gana! \n";
	}
	else if (computadora == "tijera") {
		std::cout << "Las tijeras decapitan al lagarto. La computadora gana! \n";
	}
	else if (computadora == "papel") {
		std::cout << "El lagarto devora el papel. El jugador gana! \n";
	}
	else if (computadora == "spock") {
		std::cout << "El lagarto envenena a spock. El jugador gana! \n";
	}
}

void procesarEntradaJugadorSpock(std::string computadora) {
	if (computadora == "papel") {
		std::cout << "El papel desaprueba a spock. La computadora gana! \n";
	}
	else if (computadora == "lagarto") {
		std::cout << "El lagarto envenena a spock. La computadora gana! \n";
	}
	else if (computadora == "piedra") {
		std::cout << "Spock desintegra la piedra. El jugador gana! \n";
	}
	else if (computadora == "tijera") {
		std::cout << "Spock aplasta las tijeras. El jugador gana! \n";
	}
}