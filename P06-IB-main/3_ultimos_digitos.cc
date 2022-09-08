/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa que tome como entrada un número natural e imprima el 
 *        resultado de la suma de sus tres últimos dígitos.
 */

#include<iostream>

int main() {

  int numero{0}, suma{0}, contador{0};
  const int kNumIterar{10};

  std::cout << "Introduzca un numero natural: ";
  std::cin >> numero;

  while (contador != 3) {
    suma = suma + (numero % kNumIterar);
    numero = numero / kNumIterar;
    contador++;
  }  
  
  std::cout << "La suma de los 3 ultimos digitos es: " << suma;
  return 0;
}