/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa que lea un número natural e imprima en 
 *        pantalla un "cuadrado hecho de asteriscos" del tamaño indicado.
 */

#include<iostream>

void matriz_asterisco(int);

int main() {

  int numero{0};
  std::cout << "Introduzca un numero: ";
  std::cin >> numero;
  matriz_asterisco(numero);

  return 0;
}

void matriz_asterisco(int numero) {
  for (int i = 0; i < numero; ++i) {
    for (int j = 0; j < numero; ++j) {
      std::cout << " *";
    }
    std::cout << std::endl;
  }
}