/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads three words a, b and c, and 
 *        prints a line with c, b and a in this order.
 * 
 */

#include<iostream>
#include<string>

void reverse(std::string, std::string, std::string);

int main() {
std::string word1, word2, word3;
std::cin >> word1 >> word2 >> word3;
reverse(word1, word2, word3);
  return 0;
}

void reverse(std::string palabra1, std::string palabra2, std::string palabra3) {
  std::cout << palabra3 << " " << palabra2 << " " << palabra1 << "\n";
}