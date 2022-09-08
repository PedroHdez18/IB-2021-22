/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Pedro Hernandez Alonso
 * @date 19-10-2021
 * @brief Write a program that, given a number n, prints a “triangle of size n”.
 * 
 */

#include<iostream>

void submatriz_tri_inferior(int);

int main() {

	int numero{0};

	// std::cout << "Introduzca un numero: ";
	std::cin >> numero;

	submatriz_tri_inferior(numero);

	return 0;
}

void submatriz_tri_inferior(int numero) {
	for (int i = 0; i < numero; i++) {
		for (int j = 0; j <= i; j++)
			std::cout << "*";
	std::cout << std::endl;
	}
}