/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a sequence of characters ended with a 
 *        period and prints the number of letters ‘a’ in the sequence.
 */

#include <iostream>
#include <string>

int counting_as(std::string);

int main () {
  std::string text;
  //std::cout << "Introduce un texto para calcular el numero de a's que tiene: ";
  getline(std::cin, text);
  std::cout << counting_as(text) << std::endl;
}

int counting_as(std::string frase) {
  int count;
  for (auto i: frase) {
    if (i == 'a')
      count++;
  }
  return count;
}
