/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Desarrolle un programa random_numbers.cc que tome como entrada dos números naturales n y m 
 *        tales que n < m y genere un número aleatorio real r en el intervalo [n, m].
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int CambiaPosicion(int&,int&); 

void RandomNumberGenerator(int, int);

int main() {
  int menornum{0};
  int mayornum{0};

  std::cout << "Introduzca el menor valor del intervalo: ";
  std::cin >> menornum;
  std::cout << "Introduzca el mayor valor del intervalo ";
  std::cin >> mayornum;
  if(menornum > mayornum) {
    CambiaPosicion(menornum, mayornum);
  }
  std::cout << "El intervalo seleccionado es: {" << menornum << ',' << mayornum << "} ";
  RandomNumberGenerator(menornum, mayornum);
  return 0;
}

int CambiaPosicion(int& menornum, int& mayornum){    
  int aux{0};   
  aux = menornum;
  menornum = mayornum;
  mayornum = aux;
  return menornum, mayornum;
}

void RandomNumberGenerator(int number_n, int number_m){ 
  int random;
  std::srand(std::time(NULL));
  //random = (std::rand() / number_m); 
  random = (std::rand() % (number_m - number_n + 1) + number_n);
  //random = 1 + (std::rand() / ((number_m + 1u) / 5));
  std::cout << random;
  return;

}