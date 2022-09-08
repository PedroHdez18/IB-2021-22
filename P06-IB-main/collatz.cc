/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hdez. Alonso
 * @date 6 Nov 202
 * @brief La secuencia de Collatz de un número entero se construye de la siguiente forma:
 *        si el número es par, se lo divide por dos.
 *        si es impar, se le multiplica tres y se le suma uno.
 *        la sucesión termina al llegar a uno.
 */

#include <iostream>

int main () {

  int kInicialValue, resto;
  std::cout << "Introduzca un numero: ";
  std::cin >> kInicialValue;
  resto = kInicialValue;
  std::cout << kInicialValue << " ";

  while (resto != 1 ) {
    if ((resto % 2) == 0) {
        resto = resto / 2;
        std::cout << resto << " ";
    }
    else {
      resto = (resto * 3) + 1; 
      std::cout << resto << " ";
    }
  }
}