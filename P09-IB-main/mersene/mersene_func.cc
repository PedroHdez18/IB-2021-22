/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 7.nov.2020
 * @brief Un primo de Mersenne es un número primo de la forma 2p - 1. Una propiedad conocida 
 *        de de los primos de Mersenne es que p debe ser también un número primo. 
 *        Desarrolle un programa mersenne.cc que tome por línea de comandos un número N y 
 *        muestre como salida los primeros N primos de Mersenne.
 *
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>    // exit

#include "mersene_func.h"


void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un numero natural como parametro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para mas informacion" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


std::vector<int> FuncionPrimosVector(int numero) {
  std::vector<int> vector_primo(numero);
  int numero_primo = 3; 
  int i, j;
  vector_primo[0] = 2;
  for (j = 1; j != numero; j++) {
    for (i = 2; i != numero_primo - 1; i++) {
      if (numero_primo % i == 0) {
        ++numero_primo; 
        i=2;
      }
    }
    vector_primo[j] = {numero_primo};
    ++numero_primo;
  }
  return vector_primo;
}


int FuncionApartirDeUnPrimo(int numero) {
  int i, j;
  int numero_final = numero + 1;
  for (i = 2; i != numero_final - 1; i++) {
    if (numero_final % i == 0) {
      ++numero_final;
      i = 2;
    }
  }
  return numero_final;
}


bool CalculadorPrimo(int numero){
  int i;
  for ( i= 2; i != numero - 1; i++) {
    if (numero % i == 0) {
      return 0;
    }
  } 
  return 1;
}


void CalculadorMersenne(int numero){
  int n_final = 0, numero_copia = numero;
  int i, j;
  std::vector<int> vector_final;
  std::vector<int> vector_definitivo(numero);
  vector_final= FuncionPrimosVector(numero);
  
  for (j = 0,i = 0; j != numero, i != numero; i++, j++) {
    n_final = (pow(2, vector_final[i]) - 1);    // Calculador de formula de mersenne
    if (CalculadorPrimo(n_final) == 1) {  //Comprobador de si mersenne es primo 
      vector_definitivo[j] = {n_final};
    }
    if (CalculadorPrimo(n_final) == 0) {
      vector_final.push_back(FuncionApartirDeUnPrimo(vector_final.back()));
      ++numero;
      --j;
    }
  }
  if (numero_copia != numero) {
    for(i = 0; i != numero - 1; i++) {
      std::cout<< vector_definitivo[i] <<std::endl;
    }
  }
  if (numero_copia == numero) {
    for(i=0; i != numero; i++){
      std::cout<< vector_definitivo[i] <<std::endl;
    }
  } 
}