#include <iostream>
#include <string>

#include "findFirstOf.h"

using namespace std;

int main(int argc, char** argv){
    Usage(argc, argv);
    string palabra = argv[1];
    string letra = argv[2];
    if(posLetra(palabra, letra) > 0){
    cout << "La letra se encuentra en la posicion: " << posLetra(palabra, letra) << endl;
    }else{
    cout << "La letra no se encuentra en la palabra. " << posLetra(palabra, letra) << endl;       
    }
    return 0;
}