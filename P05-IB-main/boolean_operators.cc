/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa boolean_operators.cc que imprima en pantalla 
 *        la tabla de verdad de los operadores lógicos (and, or, not) de C++. El 
 *        programa deberá utilizar un par de variables booleanas y mostrar el 
 *        resultado de operar ambas variables con todos sus posibles valores y con 
 *        cada uno de los operadores lógicos.
 * 
 */

#include <iostream>

int main() {

  bool A{0}; //0 true //1 false
  bool B{0}; //0 true //1 false

  std::cout << " A   B  |  NOT (A)  |  NOT (B)  |  OR  | AND" << std::endl;
  std::cout << " " << A  << "   " << B  << "  |     " << !A << "     |     " << !B << "     |   "  << (A||B)   << "  |  " << (A&&B)   << std::endl;
  std::cout << " " << A  << "   " << !B << "  |     " << !A << "     |     " << B  << "     |   "  << (A||!B)  << "  |  " << (A&&!B)  << std::endl;
  std::cout << " " << !A << "   " << B  << "  |     " << A  << "     |     " << !B << "     |   "  << (!A||B)  << "  |  " << (!A&&B)  << std::endl;
  std::cout << " " << !A << "   " << !B << "  |     " << A  << "     |     " << B  << "     |   "  << (!A||!B) << "  |  " << (!A&&!B) << std::endl;

  return 0;
}