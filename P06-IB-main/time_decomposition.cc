/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa time_decomposition.cc que, dado un número 
 *        natural n imprima el el número de horas, minutos y segundos 
 *        representados por n. 
 */

#include<iostream>

int main() {

  double numero{0};
  int horas{0}, minutos{0}, segundos{0};
  const int kValorHora{3600}, kValorMinutos{60}, KValorSegundo{1};

  std::cout << "Introduzca un numero natural: ";
  std::cin >> numero;

  while (numero >= kValorHora) {
    numero = numero - kValorHora;
    horas++;
  }

  while (numero >= kValorMinutos) {
    numero = numero - kValorMinutos;
    minutos++;
  }

  while (numero != 0) {
    numero = numero - KValorSegundo;
    segundos++;
  }

  std::cout << "Horas: " << horas;
  std::cout << " Minutos: " << minutos;
  std::cout << " Segundos: " << segundos;

  return 0;
}