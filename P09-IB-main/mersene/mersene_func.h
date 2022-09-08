/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and others functions
 *
 */

#include <iostream>
#include <cmath>
#include <vector>

const std::string kHelpText = "Este programa calcula los x numeros de mersene \
dependiendo del numero x que el usuario introduzca por parametros";

void Usage(int argc, char *argv[]);
std::vector<int> FuncionPrimosVector(int);
int FuncionApartirDeUnPrimo(int);
bool CalculadorPrimo(int);
void CalculadorMersenne(int);