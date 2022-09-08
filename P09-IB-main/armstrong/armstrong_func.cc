/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 7.nov.2020
 * @brief Desarrolle un programa en C++ que tome como parámetro por línea 
 *        de comandos un número e indique si se trata de un número de Armstrong o no.
 *
 */

#include <vector>
#include <iostream>
#include <cmath>

#include "armstrong_func.h"

void comprobar_armstrong(int numero) {
  std::vector<int> vec_digits;
  int cociente{numero}, aux{0}, suma{0};
  const int kNumIter{10};

  while (cociente != 0) {
    aux = cociente % kNumIter;
    vec_digits.push_back(aux);
    cociente = cociente / kNumIter;
  }

  for (size_t i = 0; i < vec_digits.size(); i++)
    suma = suma + pow(vec_digits.at(i), vec_digits.size());

  if (suma == numero)
    std::cout << numero << " is an Armstrong number" << std::endl;
  else 
    std::cout << numero << " is not an Armstrong number" << std::endl;
}