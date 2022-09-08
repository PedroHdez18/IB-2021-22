/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Henandez Alosno
 * @date 19-10-2021
 * @brief Escribir un programa en C++ que permita determinar el número de yenes equivalente a 
 *        una cierta cantidad de euros.
 * 
 */

#include <iostream>

int main() {

  double kYen{0.0075}, euros{0}, eutoyen{0};
  std::cout << "Introduzca la cantidad de euros de los que dispone: ";
  std::cin >> euros;

  eutoyen = euros / kYen;

  std::cout << "Usted posee un total de " << eutoyen << " yenes.\n";

  return 0;
}