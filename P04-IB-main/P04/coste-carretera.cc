/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Henandez Alosno
 * @date 19-10-2021
 * @brief Escribir un programa en C++ que calcule y muestre el coste de una carretera en función 
 *        de (i) su longitud y (ii) el coste por metro. El programa solicitará al usuario únicamente 
 *        la cantidad de metros de longitud que tiene la carretera, mientras que el coste por metro 
 *        es un valor conocido de 1624 euros.
 * 
 */

#include <iostream>

int main () {

  float metros{0}, precio{0};
  int kCosteMetro{1624};
  std::cout << "Introduzca la longitud de la carretera en metros: ";
  std::cin >> metros;

  precio = metros * kCosteMetro;

  std::cout << "El coste de la carretera que mide " << metros << 
  " metros es de " << precio << " euros.\n";

  return 0;
}

