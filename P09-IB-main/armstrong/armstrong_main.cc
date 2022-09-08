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

/* Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

int main(int argc, char* argv[]) {
  int numero = std::stoi(argv[1]);
  comprobar_armstrong(numero);
  return 0;
}