/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Desarrolle un programa longest_shortest.cc que identificque cual es la 
 *        palabra mas larga y la mas corta de las introducidas por el usuario.
 *        
 */

#include<iostream>
#include<vector>
#include<string>

void fill_vector(int, std::vector<std::string>&);
void longuest_word(int, std::vector<std::string>);
void shortest_word(int, std::vector<std::string>);

int main() {

  int num_palabras{0};
  std::vector<std::string> vector_palabras;

  std::cout << "Cantidad de palabras: ";
  std::cin >> num_palabras;

  fill_vector(num_palabras, vector_palabras);
  shortest_word(num_palabras, vector_palabras);
  longuest_word(num_palabras, vector_palabras);

  return 0;
}

void fill_vector(int longitud_vector, std::vector<std::string>& vec) {
  for (int i = 1; i <= longitud_vector; ++i){
    std::string word;
    std::cout << "Palabra " << i << ": ";
    std::cin >> word;
    // vec[i]={word};
    vec.push_back(word);
  }
  std::cout << std::endl;
  for (auto i : vec)
    std::cout << i.length() << " ";
  std::cout << std::endl;
}

void shortest_word(int longitud_vector, std::vector<std::string> vec) {
  std::string shortest{vec[0]};
  for (int i = 0; i < longitud_vector; ++i) {
    if (shortest.size() > vec.at(i).size()) {
      shortest = vec.at(i);
    }
  }
  std::cout << "La palabra mas corta es " << shortest << std::endl;
  return;
}

void longuest_word(int longitud_vector, std::vector<std::string> vec) {
  std::string longuest{vec[0]};
  for (int i = 0; i < longitud_vector; ++i) {
    if (longuest.size() < vec.at(i).size()) {
      longuest = vec.at(i);
    }
  }
  std::cout << "La palabra mas larga es " << longuest << std::endl;
  return;
}