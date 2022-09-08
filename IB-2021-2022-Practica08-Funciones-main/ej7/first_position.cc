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

int first_even(std::vector<int>);

int main () {
  std::vector<int> vec_int;
  std::string text;
  while (std::cin >> text) {
    int number{std::stoi(text)};
    vec_int.push_back(number);
  }
  std::cout << first_even(vec_int) << std::endl;
  return 0;
}

int first_even(std::vector<int> vec) {
  int result{0};
  for (int i = vec.size() - 1; i >= 0; --i) {
    if (vec.at(i) % 2 == 0)
      result = i;
  }
  return result + 1;
}
