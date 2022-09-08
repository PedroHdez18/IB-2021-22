/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 7.nov.2020
 * @brief Un primo de Mersenne es un número primo de la forma 2p - 1. Una propiedad conocida 
 *        de de los primos de Mersenne es que p debe ser también un número primo. 
 *        Desarrolle un programa mersenne.cc que tome por línea de comandos un número N y 
 *        muestre como salida los primeros N primos de Mersenne.
 *
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>    /// exit

#include "mersene_func.h"    

/* Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int numero = std::stoi(argv[1]);
  CalculadorMersenne(numero);
  return 0;
}