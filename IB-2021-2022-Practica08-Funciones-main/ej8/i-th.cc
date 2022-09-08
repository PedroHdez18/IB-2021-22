/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a sequence of natural numbers 
 *        and prints the position of the first even number.
 * 
 */

#include<iostream>
#include<vector>
#include<string>

void position(int, std::vector<int>);

int main() {

  int num_examinar{0};
  std::cin >> num_examinar;
  std::vector<int> vec_int;
  std::string text;
  while (std::cin >> text) {
    int number{std::stoi(text)};
    vec_int.push_back(number);
  }
  position(num_examinar, vec_int);
  return 0;
}

void position(int num, std::vector<int> vec) {
  std::cout << "At the position " << num << " there is a(n) " << vec.at(num-1) << "." <<  std::endl;
}
