/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Escriba un programa short_cirtuit.cc que evidencie que los operadores
 *        lógicos and y or (&& y ||) de C++ utilizan evaluación de circuito corto. En 
 *        una disyunción lógica (or) el segundo operando no se evaluará si el primero 
 *        es cierto (true), puesto que el resultado de esa evaluación no cambiaría el 
 *        resultado de la disyunción, que será cierta. (Análogamente con una conjunción, and).
 */

#include <iostream>

int main() {
  
  int aux{0};

  bool sentencia = (aux == 0 || aux == 1);
  std::cout << "Sentencia = " << sentencia << std::endl << "Variable = " << aux << std::endl;
  // En una disyunción lógica (or) el segundo operando no se evaluará si el primero 
  // es cierto (true)

  int var1{0};
  int var2{1};
  if (var1 == 1 && ++var2 == 2) {
    std::cout << var1 << " " << var2;
  }
  std::cout << "var2: " << var2 << std::endl;
  return 0;
  // En una conjuncion logica, ambos operandos han de ser cierto para que la expresion 
  // sea cierta

  return 0;
}


