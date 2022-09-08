/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
 * 
 */ 

#include <iostream>

void harmonic(int, int);

int main() {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(10);

  int n{0}, m{0};
  harmonic(n, m);
  return 0;
}

void harmonic(int num1, int num2) {
  int n{0}, m{0};
  while (std::cin >> num1 >> num2) {
    n = num1;
    m = num2;
    double sub = 0;
    m++;
    while (m <= n) {
      sub += (double) 1 / m;
      m++;
    }
    std::cout << sub << std::endl;
  }
}