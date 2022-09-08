/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program to print in order all the divisors of a given number.
 * 
 */

#include<iostream>

void divisors(int);

int main() {
  int numero{0};
  divisors(numero);
  return 0;
}

void divisors(int number) {
  int aux{0};
  while (std::cin >> number) {
    aux = number;
    std::cout << "divisors of " << aux << ": ";
    int i;
    for (i = 1; i * i < aux; i++) {
      if (aux % i == 0)
        std::cout <<i<<" ";
    }
    if (i - (aux / i) == 1)
      i--;
    for (; i > 1; i--) {
      if (aux % i == 0)
        std::cout <<aux / i<<" ";
    }
    std::cout << aux << std::endl;
  aux = 0;
  }
}