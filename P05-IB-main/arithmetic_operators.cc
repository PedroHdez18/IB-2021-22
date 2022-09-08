/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa arithmetic_operators.cc que declare e inicialice
 *        variables de tipos aritméticos e imprima en pantalla el resultado de operar 
 *        esas variables con todos los operadores que pueda utilizar con ellas.
 */

#include <iostream>

int main() {

  double var1{7}, var2{3};
  double suma, resta, multiplicacion, division;
  int resto;
  suma = var1+var2;
  resta = var1-var2;
  multiplicacion = var1*var2;
  division = var1/var2;
  resto = (int)var1%(int)var2;

  std::cout << "El resultado de operar " << var1 << " + " << var2 << " es: " << suma << std::endl;
  std::cout << "El resultado de operar " << var1 << " - " << var2 << " es: " << resta << std::endl; 
  std::cout << "El resultado de operar " << var1 << " * " << var2 << " es: " << multiplicacion << std::endl; 
  std::cout << "El resultado de operar " << var1 << " / " << var2 << " es: " << division << std::endl;
  std::cout << "El resultado de operar " << var1 << " % " << var2 << " es: " << resto << std::endl;

  if (var1 > var2)
    std::cout << var1 << " es mayor que " << var2 << std::endl; 
  else if (var2 > var1)
    std::cout << var2 << " es mayor que " << var1 << std::endl;
  else if (var1 == var2)
    std::cout << var1 << " es igual que " << var2 << std::endl;

  return 0;   
}