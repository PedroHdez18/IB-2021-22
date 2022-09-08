/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa references.cc que declare cuatro variables de diferentes 
 *        tipos y las inicialice utilizando los diferentes mecanismos de inicialización 
 *        de variables que suministra el lenguaje.
 * 
 */

#include <iostream>

int main() {

  int entero = 1;
  char caracter{'a'};
  float flotante(1.5);
  double doble = {1.5};

  int &entero_ = entero;
  char& caracter_ = caracter;
  float& flotante_ = flotante;
  double& doble_ = doble;

  std::cout << entero << "     " << entero_ << std::endl;
  std::cout << caracter << "     " << caracter_ << std::endl;
  std::cout << flotante << "   " << flotante_ << std::endl;
  std::cout << doble << "   " << doble_ << std::endl;
  

  return 0;
}