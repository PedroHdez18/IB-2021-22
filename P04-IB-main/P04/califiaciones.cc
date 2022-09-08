/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Henandez Alosno
 * @date 19-10-2021
 * @brief Escribir un programa en C++ que calcule y muestre la media de 3 
 *        calificaciones de alumnos de la asignatura Informática Básica. El programa 
 *        solicitará al usuario la calificación de cada uno de los 3 alumnos donde 
 *        cada calificación será un valor numérico entre 0.0 y 10.0.
 * 
 */

#include<iostream>

int main() {

  double alumno_1{0}, alumno_2{0}, alumno_3{0}, media{0};

//ALUMNO 1
  std::cout << "Introduzca la nota del alumno 1: ";
  std::cin >> alumno_1;
  while(alumno_1 < 0 || alumno_1 > 10) {
    std::cout << "Nota incorrecta, introduzcala otra vez: ";
    std::cin >> alumno_1;
  }

//ALUMNO 2
  std::cout << "Introduzca la nota del alumno 2: ";
  std::cin >> alumno_2;
  while(alumno_2 < 0 || alumno_2 > 10) {
    std::cout << "Nota incorrecta, introduzcala otra vez: ";
    std::cin >> alumno_2;
  }

//ALUMNO 1
  std::cout << "Introduzca la nota del alumno 3: ";
  std::cin >> alumno_3;
  while(alumno_3 < 0 || alumno_3 > 10) {
    std::cout << "Nota incorrecta, introduzcala otra vez: ";
    std::cin >> alumno_3;
  }

  media = (alumno_1 + alumno_2 + alumno_3) / 3;

  std::cout << "La nota media de los 3 alumnos es: " << media;

  return 0;
}