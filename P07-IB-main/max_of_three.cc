/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads three numbers and prints their maximum.
 */

#include <iostream>

int max_num(int, int, int);

int main() {

  int n1{0}, n2{0}, n3{0};
  std::cin >> n1;
  std::cin >> n2;
  std::cin >> n3;

  std::cout << max_num(n1, n2, n3) << std::endl;
  return 0;
}

int max_num(int n1, int n2, int n3) {
  if (n1 >= n2 && n1 >= n3)
    return n1;
  else if (n2 > n3)
    return n2;
  else
    return n3;
}


















// #include<iostream>
// #include<vector>

// void crear_vec(const int, std::vector<int>&);
// int max_num(const int, std::vector<int>);

// int main() {

//   const int kTamVec{3};
//   std::vector<int> vector_num;

//   crear_vec(kTamVec, vector_num);
//   std::cout << max_num(kTamVec, vector_num) << std::endl;
//   return 0;
// }

// void crear_vec(const int tamanio, std::vector<int>& vec) {
//   for (int i = 0; i < tamanio; i++) {
//     int num{0};
//     //std::cout << "Introduzca un numero: ";
//     std::cin >> num;
//     vec.push_back(num);
//   }
// }

// int max_num(const int tamanio, std::vector<int> vec) {
//   int num{0};
//   for (int i = 0; i < tamanio; i++){
//     if (num < vec.at(i)) {
//       num = vec.at(i);
//     }
//   }
//   return num;
// }