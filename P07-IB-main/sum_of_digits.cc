/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads several numbers and prints the sum of the digits of each one.
 */

#include<iostream>

void sum_dig(int);

int main() {
  int numero{0};
  sum_dig(numero);
  return 0;
}

void sum_dig(int num) {
  int aux{0},resultado{0};
  while (std::cin >> num) {
    aux = num;
    while (num >= 1) {
      resultado += (num % 10);
      num = num / 10;
    }
    std::cout << "The sum of the digits of " << aux << " is " << resultado << '.'<< std::endl;
    resultado = 0;
  }
}

