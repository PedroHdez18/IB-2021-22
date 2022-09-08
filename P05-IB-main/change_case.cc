/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa change_case.cc que solicite al usuario una letra. 
 *        Si la que introduce el usuario es minúscula, ha de imprimir la correspondiente 
 *        mayúscula y viceversa. El programa deberá asegurarse de que el usuario introduzca 
 *        una letra y no otro carácter que fuera no adecuado a lo que el programa solicita.
 * 
 */

#include <iostream>

int main() {

  char letra[0];

  std::cout << "Introduzca una letra: ";
  std::cin >> letra;
  
  while (!(isalpha(letra[0]))) {
    std::cout << "Caracter incorrecto. Debe introducir una letra: ";
    std::cin >> letra;
  }

  if (isupper(letra[0])) {
    std::cout << letra << " -> ";
    putchar(tolower(letra[0]));
  } else if (islower(letra[0])) {
    std::cout << letra << " -> ";
    putchar(toupper(letra[0]));
  }

  // while (!((letra[0] <= 90 && letra[0] >= 65) || (letra[0] <= 122 && letra[0] >= 97))) {
  //   std::cout << "Caracter incorrecto. Debe introducir una letra: ";
  //   std::cin >> letra;
  // }

  // if (letra[0] <= 90 && letra[0] >= 65) {
  //   std::cout << letra << " -> ";
  //   letra[0] = letra[0] + 32;
  //   std::cout << letra;
  // } else if (letra[0] <= 122 && letra[0] >= 97) {
  //   std::cout << letra << " -> ";
  //   letra[0] = letra[0] - 32;
  //   std::cout << letra;
  // }

  return 0;
}