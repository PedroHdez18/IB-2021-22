/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa dividers.cc que solicite al usuario un número e imprima 
 *        en pantalla todos los divisores del número introducido:
 * 
 */

#include<iostream>

int main() {

  int numero;

  std::cout << "Introduzca un numero: ";
  std::cin >> numero;

  for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      std::cout << i << ' ';
    }
  }

  return 0;
}