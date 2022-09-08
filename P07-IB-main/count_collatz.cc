/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Let n be any strictly positive natural number. Consider the 
 *        following process. If n is an even number, we divide it by two. Otherwise, 
 *        we multiply it by 3 and add 1 to it. When we reach 1, we stop. For instance, 
 *        starting with 3, we obtain the sequence
 */

#include<iostream>

void count_sequence(int num);

int main() {
  int num{0};
  count_sequence(num);
  return 0;    
}

void count_sequence(int num) {
  int aux{0}, count{0};
  while (std::cin >> num) {
    aux = num;
    while (aux > 1) {
      ++count;
      if ((aux % 2) == 0) {
        aux = aux / 2;
      } else {
        aux = (aux * 3 ) + 1;
      }
    }
    std::cout << count << std::endl;
    count = 0;
  }
}