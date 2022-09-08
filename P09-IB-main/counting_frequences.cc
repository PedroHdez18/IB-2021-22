/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a sequence of natural numbers 
 *        and that prints, for each one, how many times it appears.
 * 
 */

#include <iostream>
#include <vector>

void counting(std::vector<int>);

int main(){

  unsigned long n;
  std::cin >> n;
  std::vector<int> v(1001);
  int a;

  for (int num = 0; num < n; num++){
    std::cin >> a;
    v[a%10000]++;
  }

  counting(v);
  return 0;
}

void counting(std::vector<int> vec) {
  for (int i = 0; i < 1001; i++){
    if(vec[i] != 0) 
      std::cout << 1000000000+i << " : " << vec[i] << std::endl;
  }
}