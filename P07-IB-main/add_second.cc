/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that adds one second to a clock time, 
 *        given its hours, minutes and seconds.
 */

#include<iostream>

void sum_sec(int, int, int);

int main() {
  int hour{0}, minute{0}, sec{0};

  //std::cout << "Introduce horas: ";
  std::cin >> hour;
  while (hour > 24 || hour < 0) {
    //std::cout << "Introduzca horas correctas: ";
    std::cin >> hour;
  }
  //std::cout << "Introduce minutos: ";
  std::cin >> minute;
  while (minute > 60 || minute < 0) {
    //std::cout << "Introduzca minutos correctos: ";
    std::cin >> minute;
  }
  //std::cout << "Introduce segundos: ";
  std::cin >> sec;
  while (sec > 60 || sec < 0) {
    //std::cout << "Introduzca segundos correctos: ";
    std::cin >> sec;
  }
  sum_sec(hour, minute, sec);
  return 0;
}

void sum_sec(int h, int m, int s) {
  ++s;  
  if (s == 60) {
  s = 0;
  ++m;
  }
  if (m == 60) {
    m = 0;
    ++h;
  }
  if (h == 24) {
    h = 0;
  }
  if (h < 10) 
    std::cout << "0" << h << ":";
  else 
    std::cout << h << ":";
  
  if (m < 10)
    std::cout << "0" << m << ":";
  else 
    std::cout << m << ":";

  if (s < 10)
    std::cout << "0" << s;
  else 
    std::cout << s;

  std::cout << std::endl;
}