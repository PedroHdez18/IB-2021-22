/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba en C++ un programa data_types.cc que imprima en pantalla la cantidad 
 *        de memoria que utiliza su compilador para almacenar cada uno de los tipos 
 *        básicos del lenguaje.
 * 
 */

#include<iostream>

int main() {

  std::cout << "El tipo de datos bool se representa utilizando " << sizeof(bool) << " bytes.\n";
  std::cout << "El tipo de datos char se representa utilizando " << sizeof(char) << " bytes.\n";
  std::cout << "El tipo de datos int se representa utilizando " << sizeof(int) << " bytes.\n";
  std::cout << "El tipo de datos flotante se representa utilizando " << sizeof(float) << " bytes.\n";
  std::cout << "El tipo de datos double se representa utilizando " << sizeof(double) << " bytes.\n";

  return 0;
}

