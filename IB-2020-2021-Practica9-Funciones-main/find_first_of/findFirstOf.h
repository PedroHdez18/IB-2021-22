#include <iostream>

using namespace std;

const string kHelpText = "Introduzca primero una palabra y despues una letra \
para buscar dentro esa lentra dentro de dicha palabra \
Ejemplo: ./findFirstOf ordenador d ";

void Usage(int argc, char *argv[]);
int posLetra(string palabra, string letra);