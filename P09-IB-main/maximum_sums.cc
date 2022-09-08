/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a sequence of numbers, and prints 
 *        the maximum quantity that can be obtained by adding numbers consecutively 
 *        from the beginning, and the maximum quantity that can be obtained by adding 
 *        numbers consecutively from the end.
 * 
 */

#include <iostream>
#include <vector>

void maxsum(int& i, int& xfor, int& xback, int& maxfor, int& maxback){
  int a = 0;
  if (i != 0){
    std::cin >> a;
    if(xfor+a > maxfor) maxfor = xfor+a;
    xfor = xfor+a;
    maxsum(--i, xfor, xback, maxfor,maxback);
  }
  if (i == 0){
    xback += a;
    if(xback > maxback) maxback = xback;
  }
}

int main() {
  int n;
  while (std::cin >> n){
    int xfor = 0;
    int xback = 0;
    int maxfor = 0;
    int maxback = 0;
    maxsum(n,xfor, xback,maxfor,maxback);
    std::cout << maxfor << ' ' << maxback << std::endl;
  }
}