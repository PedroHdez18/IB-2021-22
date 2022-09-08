/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Henandez Alosno
 * @date 19-10-2021
 * @brief Escribir un programa en C++ que solicite al usuario la cantidad de monedas 
 *        1, 5, 10 y 20 céntimos así como los billetes de 5, 10, 20, 50, 100, 200 y 500 que 
 *        tiene y calcule y muestre la cantidad de dinero de la que dispone.
 *
 */

#include <iostream>

int main() {

  int moneda1{0}, moneda5{0}, moneda10{0}, moneda20{0};
  int billete5{0}, billete10{0}, billete20{0}, billete50{0}, billete100{0}, billete200{0}, billete500{0};
  double euros_total{0};

//MONEDAS
  std::cout << "Introduzca la cantidas de monedas de 1 centimo: ";
  std::cin >> moneda1;
  std::cout << "Introduzca la cantidas de monedas de 5 centimo: ";
  std::cin >> moneda5;
  std::cout << "Introduzca la cantidas de monedas de 10 centimo: ";
  std::cin >> moneda10;
  std::cout << "Introduzca la cantidas de monedas de 20 centimo: ";
  std::cin >> moneda20;

//BILLETES
  std::cout << "Introduzca la cantidad de billetes de 5 euros: ";
  std::cin >> billete5;
  std::cout << "Introduzca la cantidad de billetes de 10 euros: ";
  std::cin >> billete10;
  std::cout << "Introduzca la cantidad de billetes de 20 euros: ";
  std::cin >> billete20;
  std::cout << "Introduzca la cantidad de billetes de 50 euros: ";
  std::cin >> billete50;
  std::cout << "Introduzca la cantidad de billetes de 100 euros: ";
  std::cin >> billete100;
  std::cout << "Introduzca la cantidad de billetes de 200 euros: ";
  std::cin >> billete200;
  std::cout << "Introduzca la cantidad de billetes de 500 euros: ";
  std::cin >> billete500;

  euros_total = moneda1 * 0.01 + moneda5 * 0.05 + moneda10 * 0.1 + 
  moneda20 * 0.2 + billete5 * 5 + billete10 * 10 + billete20 * 20 + 
  billete50 * 50 + billete100 * 100 + billete200 * 200 + billete500 * 500;

  std::cout << "Dinero total: " << euros_total << " euros";
   
  return 0;
}