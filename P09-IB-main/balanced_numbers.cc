/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief In this exercise, we say that a natural number is balanced 
 *        if the sum of the digits in even positions is equal to the sum of 
 *        the digits in odd positions. For instance, 1463 and 48015 are balanced numbers.
 * 
 */

#include <iostream>

bool is_balanced(int n) {
  int sum_parell{0}, sum_senar{0}, digit{0};
  
  for (int i = 0; n != 0; ++i) {
      digit = n % 10;
      if (i % 2 == 0){
        sum_parell += digit;
      } else {
        sum_senar += digit;
      }
      n /= 10;
  }
  return (sum_parell == sum_senar);
}

int main() {
    
}