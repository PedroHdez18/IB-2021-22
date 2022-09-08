/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that encrypts messages with the “Caesar cipher”, 
 *        used by Julius Caesar to communicate with his generals. Given a constant k, 
 *        each letter of the original message is replaced by the letter that is alphabetically 
 *        k positions to its right (circularly, if needed). For instance, if k = 5, we must 
 *        change ‘a’ by ‘f’, ‘b’ by ‘g’, …, ‘y’ by ‘d’, and ‘z’ by ‘e’.
 * 
 */

#include <iostream>

char encoded(char, int);
int main() {

  int n;
  char c = 'a';
  std::cin >> n;

  while (std::cin >> c){
    if (c == '_'){
      std::cout << ' ';
    } else if (c == '.'){
      std::cout << std::endl;
      std::cin >> n;
    } else if ((64 < (int)c and (int)c < 91) or (96 < (int)c and (int)c < 123)) {
      if(!(64 < (int)c and (int)c < 91)){
        c = encoded(c,n);
      } else if (!(96 < (int)c and (int)c < 123)){
        c = encoded(c,n);
      }
      std::cout << c;
    } else {
      std::cout << c;
    }
  }
}

char encoded(char c, int k){
  return (char)(((c-'a'+k) % 26)+'A');
}