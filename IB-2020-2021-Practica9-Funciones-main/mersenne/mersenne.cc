#include <iostream>
#include "mersenne.h"
#include <string>

int main(int argc, char* argv[]){
  Usage(argc,argv);
  Foreword();
  int numero = std::stoi(argv[1]);
  CalculadorMersenne(numero);
}