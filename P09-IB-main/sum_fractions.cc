/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads triples of natural numbers 
 *        a, b and k, and for each one computes and prints the result of for all 
 *        fractions with denominator smaller than or equal to b.
 * 
 */

#include <iostream>

void fraction(double, double, double);

int main() {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(4);

  double a,b,k;
  fraction(a,b,k);

  return 0;
}

void fraction(double a_, double b_, double k_) {
  double a{0}, b{0}, k{0};
  while (std::cin >> a_ >> b_ >> k_) {
    a = a_;
    b = b_;
    k = k_;
    double x{0};
    for (double i = 0; (a + i*k) <= b; i++) {
      x += 1 / (a + i*k);
    }
    std::cout << x << std::endl;
  }
}

