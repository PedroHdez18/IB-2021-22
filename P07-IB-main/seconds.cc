/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that converts to seconds a given amount 
 *        of years, days, hours, minutes and seconds.
 */

#include<iostream>

int years_to_seconds(const int, int);
int days_to_seconds(const int, int);
int hours_to_seconds(const int, int);
int minutes_to_seconds(const int, int);
int sum(int, int, int, int, int);

const int kSecYear{31536000};
const int kSecDay{86400};
const int kSecHour{3600};
const int kSecMin{60};

int main() {

  int years{0}, days{0}, hours{0}, minutes{0}, seconds{0};
  int op1{0}, op2{0}, op3{0}, op4{0};
  
  //std::cout << "Introduce anyos: ";
  std::cin >> years;
  //std::cout << "Introduce dias: ";
  std::cin >> days;
  //std::cout << "Introduce horas: ";
  std::cin >> hours;
  //std::cout << "Introduce minutos: ";
  std::cin >> minutes;
  //std::cout << "Introduce segundos: ";
  std::cin >> seconds;

  op1 = years_to_seconds(kSecYear, years);
  op2 = days_to_seconds(kSecDay, days);
  op3 = hours_to_seconds(kSecHour, hours);
  op4 = minutes_to_seconds(kSecMin, minutes);

  std::cout << sum(op1, op2, op3, op4, seconds) << std::endl;

  return 0;
}

int years_to_seconds(const int cte, int year) {
  int sec{0};
  sec = year * cte;
  return sec;
}

int days_to_seconds(const int cte, int day) {
  int sec{0};
  sec = day * cte;
  return sec;
}

int hours_to_seconds(const int cte, int hour) {
  int sec{0};
  sec = hour * cte;
  return sec;
}

int minutes_to_seconds(const int cte, int minute) {
  int sec{0};
  sec = minute * cte;
  return sec;
}

int sum(int op1, int op2, int op3, int op4, int op5) {
  int total{0};
  total = op1 + op2 + op3 + op4 + op5;
  return total;
}