/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads sequences of integer numbers 
 *        and prints the maximum value of each sequence.
 * 
 */

#include <iostream>

void max_sequence(int);

int main() {
  int n;
  max_sequence(n);
}

void max_sequence(int num) {
  int n{0};
  while (std::cin >> num) {
    n = num;
    int max;
    for (int i = 0; i < n; i++){
      int valor;
      std::cin >> valor;
      if (i == 0) 
        max = valor;
      else if (valor > max) 
        max = valor;
    }
    std::cout << max << std::endl;
  }
}