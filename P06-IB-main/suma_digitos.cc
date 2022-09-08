/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa que lea un número natural e imprima como 
 *        salida la suma de los dígitos del número en cuestión.
 */

#include<iostream>

int main() {

  int numero{0}, suma{0};
  int cociente{numero};
  const int kNumIterar{10};

  std::cout << "Introduzca un numero natural: ";
  std::cin >> numero;

  while (numero != 0) {
    suma = suma + (numero % kNumIterar);
    numero = numero / kNumIterar;
  }

  std::cout << "La suma de todos los digitos es: " << suma;



  return 0;
}