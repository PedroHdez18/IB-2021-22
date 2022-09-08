/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief El agua (A) vence a la piedra (P) que a su vez vence al 
 *        viento (V) que vence al agua. Di quien gana el enfrentamiento, 
 *        o si se produce un empate.
 */

#include<iostream>

void Winner(char, char);

int main(){
  char element1, element2;
  //std::cout << "Introduzca dos elementos: (agua, piedras, viento)";
  std::cin >> element1 >> element2;
  Winner(element1, element2);
  std::cout << std::endl;

  return 0;
}

void Winner(char elem1, char elem2) {
  if (elem1 == 'A') {
    if (elem2 == 'A') {
      std::cout << "-";
    } else if (elem2 == 'P') {
      std::cout << "1";
    } else if (elem2 == 'V') {
      std::cout << "2";
    }
  } else if (elem1 == 'P') {
    if (elem2 == 'A') {
      std::cout << "2";
    } else if (elem2 == 'P') {
      std::cout << "-";
    } else if (elem2 == 'V') {
      std::cout << "1";
    }
  } else if (elem1 == 'V') {
    if (elem2 == 'A') {
      std::cout << "1";
    } else if (elem2 == 'P') {
      std::cout << "2";
    } else if (elem2 == 'V') {
      std::cout << "-";
    }
  }
}