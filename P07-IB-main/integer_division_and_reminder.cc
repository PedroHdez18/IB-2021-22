/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads two natural numbers a and b, with b > 0, 
 *        and prints the integer division d and the remainder r of a divided by b.
 * 
 */

#include<iostream>

void div_resto(int, int);

int main() {

  int operandoA{0}, operandoB{0};
  //std::cout << "Introduzca operando A: ";
  std::cin >> operandoA;
  //std::cout << "Introduzca operando B: ";
  std::cin >> operandoB;
  while (operandoB < 0) {
    std::cout << "El operando B tiene que ser mayor que 0: ";
    std::cin >> operandoB;
  }
  div_resto(operandoA, operandoB);
  return 0;
}

void div_resto(int op1, int op2) {
  int resultado{0}, resto{0};
  resultado = op1 / op2;
  resto = op1 % op2;
  std::cout << resultado << " " << resto << std::endl;
}