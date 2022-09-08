/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a sequence of characters ended in 
 *        a dot and tells if the sequence has any lowercase ‘a’ or not.
 * 
 */

#include<iostream>
#include<string>

void looking_as(std::string);

int main() {
  std::string line;
  char last_char;
  getline(std::cin, line);

  last_char = line.at(line.length() - 1);
  if (last_char != '.') {
    //std::cout << "holee";
    return 0;
  }
  looking_as(line);
  return 0;
}

void looking_as(std::string text) {
  int count{0};
  for (auto i : text) {
    if (i == 'a')
      ++count;
  }
  if (count != 0)
    std::cout << "yes" << std::endl;
  else 
    std::cout << "no" << std::endl;
}