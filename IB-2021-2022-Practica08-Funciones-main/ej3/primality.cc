/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that reads a sequence of natural numbers 
 *        and, for each one, tells if it is a prime number or not.
 * 
 */

#include<iostream>
#include<cmath>
#include<vector>

// void isPrime(long long, std::vector<long long>);
bool esPrimo(int);
bool isPrime(int);

int main() {

  int tamanio{0}, aux{0};
  std::vector<long long> vec;
  std::cin >> tamanio;
  for (int i = 0; i < tamanio; i++) {
    long long aux{0};
    std::cin >> aux;
    vec.push_back(aux);
  }
  for (int i = 0; i < tamanio; ++i) {
    if (isPrime(vec[i]) == 1)
      std::cout << vec[i] << " is prime" << std::endl;
    else 
      std::cout << vec[i] << " is not prime" << std::endl;
  }
  return 0;
}

bool isPrime(int n) {
  if (n <= 1)
    return false;

  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
 
  return true;
}