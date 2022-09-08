/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads non-empty sequences of real numbers and, 
 *        for each sequence, prints its minimum, its maximum and its average.
 * 
 */

#include <iostream>

void measures(int);

int main() {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(4);

  int sequences;
  std::cin >> sequences;

  measures(sequences);
}


void measures(int seq){
  int nums;
  for (int i = 0; i < seq; i++){ // CADA FILA
    std::cin >> nums;
    double num;
    double max;
    double min;
    double average;

    for (int j = 0; j < nums; j++){ // CADA NÚMEROS
      std::cin >> num;

      if (j == 0){
        max = num;
        min = num;
        average = num;
      } else {
        if (num > max){
          max = num;
        }
        if (num < min){
          min = num;
        }
        average += num;
      }
    }
    average /= nums;
    std::cout << min << ' ' << max << ' ' << average << std::endl;
  }
}