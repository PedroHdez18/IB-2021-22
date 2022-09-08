/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief The Taylor series of the function e^x.
 * 
 */

#include<iostream>
#include <iomanip>

double factorial(int);

int main() {

  int numero{0}; 
  while (std::cin >> numero) {
    double result{0};
    for (int i = 0; i < numero; ++i) {
      result += 1/factorial(i);
    }
    std::cout << "With " << numero << " term(s) we get " 
    << std::fixed << std::setprecision(10) << result  << "." << std::endl;
  }
  return 0;
}

double factorial(int n) {
  if(n < 0) return 0;
  else if(n > 1) return n*factorial(n-1);
  return 1;
}