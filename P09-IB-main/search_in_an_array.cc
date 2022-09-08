/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a function that tells if the integer number x is 
 *        present in the vector of integer numbers v.
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

bool exists(int x, const vector<int>& v){
  bool encontrado = false;
  int i = 0;

  while (!encontrado and i < v.size()){
    if (x == v[i]) encontrado = true;
    i++;
  }
  return encontrado;
}

int main() {

}