/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
 * 
 */

#include<iostream>
#include<string>

void legal_parenthesis(std::string);

int main() {
  
  std::string parenthesis;
  std::cin >> parenthesis;

  legal_parenthesis(parenthesis);
  
  return 0;
}

void legal_parenthesis(std::string line) {
  int count_open{0}, count_close{0};

  for (size_t i = 0; i < line.size(); i++) {
    if (line.at(i) == '(') {
      ++count_open;
    } else if (line.at(i) == ')') {
      ++count_close;
    }
  }

  if (line.at(0) == ')') {
    std::cout << "no";
  } else if (line.at(line.size()-1) == '(') {
    std::cout << "no";
  } else if (count_open != count_close) {
    std::cout << "no";
  } else {
    std::cout << "yes";
  }
  std::cout << std::endl;
}

//1 caso: que empiece por cerrado )

// 2 caso: acabe por abierto: (

//3 caso: distinto tamaño ((( ))) -> (((( )))