#include <iostream>
#include <string>

int main() {
	int numeroDia;

    // Solicitar al usuario ingresar un número de día (1-7)
    std::cout << "Ingrese un dia de la semana(1-7): ";
    std::cin >> numeroDia;

    // Utilizar switch para determinar el día de la semana
    switch (numeroDia) {
        case 1:
            std::cout << "Es Lunes." << std::endl;
            break;
        case 2:
            std::cout << "Es Martes." << std::endl;
            break;
        case 3:
            std::cout << "Es Miércoles." << std::endl;
            break;
        case 4:
            std::cout << "Es Jueves." << std::endl;
            break;
        case 5:
            std::cout << "Es Viernes." << std::endl;
            break;
        case 6:
            std::cout << "Es Sábado." << std::endl;
            break;
        case 7:
            std::cout << "Es Domingo." << std::endl;
            break;
        default:
            std::cout << "Número de día no válido." << std::endl;
    }

    return 0;
}

