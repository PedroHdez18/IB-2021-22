/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads sequences of natural numbers, and that for 
 *        each one prints the number of pairs of consecutive numbers such that the second 
 *        number of the pair is greater than the first one.
 * 
 */

#include <iostream>

void increasing(int);

int main() {

  int n;
  std::cin >> n;

  increasing(n);
  return 0;
}

void increasing(int num) {
  for (int i = 0; i < num; i++){
    int a;
    int b;
    int pairs = 0;
    std::cin >> a;

    while(a != 0){
      std::cin >> b;
      if (b > a){
        ++pairs;
      }
      a = b;
    }
    std::cout << pairs << std::endl;
  }
}