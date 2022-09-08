/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Henandez Alosno
 * @date 19-10-2021
 * @brief Escribir un programa en C++ que calcule la distancia entre 2 puntos, 
 *        A y B en el espacio cartesiano de 3 dimensiones
 * 
 */

#include<iostream>
#include<cmath>
 
int main() {

  double x_1{0}, y_1{0}, z_1{0};
  double x_2{0}, y_2{0}, z_2{0};
  double distancia{0};

  std::cout << "   Punto A: \n";
  std::cout << "Introduzca x_1: ";
  std::cin >> x_1;
  std::cout << "Introduzca y_1: ";
  std::cin >> y_1;
  std::cout << "Introduzca z_1: ";
  std::cin >> z_1;

  std::cout << "   Punto B: \n";
  std::cout << "Introduzca x_2: ";
  std::cin >> x_2;
  std::cout << "Introduzca y_2: ";
  std::cin >> y_2;
  std::cout << "Introduzca z_2: ";
  std::cin >> z_2;

  distancia = sqrt(  pow((x_2-x_1), 2) + pow((y_2-y_1), 2) + pow((z_2-z_1), 2));
  //La formula correcta seria sqrt((x2-x1)^2 + (y2-y1)^2 + (z2-z1)^2)
  std::cout << "La distancia entre los 2 puntos es: " << distancia;

  return 0;
}