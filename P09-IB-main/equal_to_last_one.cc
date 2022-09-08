/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a non-empty sequence of integer numbers, 
 *        and tells how many of them are equal to the last one.
 * 
 */

#include <iostream>
#include <vector>

int last_number(int, std::vector<int>);

int main() {

  int tamanio{0}, aux{0}, count{0};
  std::vector<int> vec_num;

  std::cin >> tamanio;
  for (size_t i = 0; i < tamanio; i++) {
    std::cin >> aux;
    vec_num.push_back(aux);
  }

  std::cout << last_number(tamanio, vec_num) << std::endl;

  return 0;
}

int last_number(int tamanio, std::vector<int> vec) {
  int count{0};
  for (size_t i = 0; i < tamanio-1; ++i) {
    if (vec.back() == vec.at(i)) {
      ++count;
    }
  }
  return count;
}
