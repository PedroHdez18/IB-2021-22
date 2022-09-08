/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Henandez Alosno
 * @date 19-10-2021
 * @brief Escribir un programa en C++ que calcule el área y el perímetro 
 *        de un cuadrado. El programa solicitará la longitud del lado del cuadrado 
 *        y luego mostrará en pantalla un mensaje con el perímetro y el área.
 * 
 */

#include<iostream>

int main() {

  double lado{0}, area{0}, perimetro{0};

  std::cout << "Introduzca la medida del lado del cuadrado: ";
  std::cin >> lado;

  area = pow(lado, 2);
  perimetro = lado * 4;

  std::cout << "Area del cuadrado: " << area << " u^2";
  std::cout << "\nPerimetro del cuadrado: " << perimetro << " u";

  return 0;
}