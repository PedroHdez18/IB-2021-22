/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa leap_year.cc que indique si un año es o no bisiesto
 */

#include<iostream>

bool test_div4(int);
int delete00(int);

int main() {

  int anyo{0};
  int anyo_no_ceros{0};
  std::cout << "Introduzca un anyo: ";
  std::cin >> anyo;

  if (test_div4(anyo) == true) {
    if (anyo % 100 == 0) {
      anyo_no_ceros = delete00(anyo);
      if (test_div4(anyo_no_ceros) == true)
        std::cout << "Es bisiesto.";
      else 
        std::cout << "No es bisiesto.";
    } else
      std::cout << "Es bisiesto."; 
  }
  else 
    std::cout << "No es bisiesto.";
  return 0;
}


bool test_div4(int anyo) {
  if (anyo % 4 == 0) 
    return true;
  else 
    return false;
}

int delete00(int anyo) {
  int suma{0}, contador{0};
  int resultado{anyo};

  while (contador != 2) {
  suma = suma + (resultado % 10);
  resultado = resultado / 10;
  contador++;
  }
  return resultado;
}