/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that, given two intervals, computes the interval 
 *        corresponding to their intersection, or tells that it is empty.
 */

#include<iostream>

void intervalo(int, int, int, int);

int main(){

int a1{0}, b1{0}, a2{0}, b2{0};
  std::cin >> a1;
  std::cin >> b1;
  std::cin >> a2;
  std::cin >> b2;

  intervalo(a1, b1, a2, b2);
  return 0;
}

void intervalo(int a1, int b1, int a2, int b2) {
  if (b1 < a2)
    std:: cout << "[]" << std::endl;
  else if (a1 > b2)
    std::cout << "[]" << std::endl;
  else {
    if (a1 >= a2)
      std::cout << '['  <<a1  << ",";
    else
      std::cout << '[' << a2 << ",";
    if (b1 <= b2 )
      std::cout << b1 << "]" << std::endl;
    else 
      std::cout << b2 << "]" << std::endl;
    }
}