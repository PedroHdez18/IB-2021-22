/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a number n and prints the n-th harmonic number
 * 
 */

#include<iostream>
#include <iomanip>

double harmonic_sequence(int);

int main() {  
  int number{0};
  std::cin >> number;
  std::cout << std::fixed << std::setprecision(4) << harmonic_sequence(number) << std::endl;
  //Imprimimos con 4 digitos en la parte decimal
  return 0;
}

double harmonic_sequence(int n) {
  double result{0};
  for (double i = 1; i <= n; i++)
    result = result + (1/i);
  return result;
}