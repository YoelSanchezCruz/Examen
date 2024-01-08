#include <iostream>
#include <string>
#include <algorithm>

bool luhn_algorithm(std::string card_number) {
    // Eliminar espacios y verificar longitud mínima
    card_number.erase(std::remove(card_number.begin(), card_number.end(), ' '), card_number.end());
    if (card_number.length() <= 1) {
        return false;
    }

    // Duplicar cada segundo dígito de derecha a izquierda
    for (int i = card_number.length() - 2; i >= 0; i -= 2) {
        int doubled_digit = (card_number[i] - '0') * 2;
        if (doubled_digit > 9) {
            doubled_digit = doubled_digit - 9;
        }
        card_number[i] = doubled_digit + '0';
    }

    // Sumar todos los dígitos
    int total_sum = 0;
    for (char digit : card_number) {
        total_sum += digit - '0';
    }

    // Verificar si el resultado es múltiplo de 10
    return (total_sum % 10 == 0);
}

int main() {
    // Solicitar al usuario ingresar el número de tarjeta
    std::string tarjeta_ingresada;
    std::cout << "Ingrese el número de tarjeta de crédito: ";
    std::getline(std::cin, tarjeta_ingresada);

    // Verificar la validez utilizando el algoritmo de Luhn
    if (luhn_algorithm(tarjeta_ingresada)) {
        std::cout << tarjeta_ingresada << " es una tarjeta de crédito válida." << std::endl;
    } else {
        std::cout << tarjeta_ingresada << " no es una tarjeta de crédito válida." << std::endl;
    }

    return 0;
}

