/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa temperatures.cc que lea un número entero que represente 
 *        una temperatura dada en grados centígrados, y que diga si hace calor, si hace 
 *        frío o si está bien.
 * 
 */

#include<iostream>

int main() {

  double temperatura{0};

  std::cout << "Introduzca la temperatura actual en grados C: ";
  std::cin >> temperatura;

  if (temperatura >= 30)
    std::cout << "It's hot";
  else if (temperatura <= 10)
    std::cout << "It's cold";
  else
    std::cout << "It's ok";

  std::cout << std::endl;

  if (temperatura >= 100)
    std::cout << "water would boil";
  else if (temperatura <= 0)
    std::cout << "water would freeze";

  return 0;
}