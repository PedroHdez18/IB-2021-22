#include <iostream>
#include <cstdlib> // exit
#include <string>

#include "findFirstOf.h"

using namespace std;

void Usage(int argc, char* argv[]){ // ./programa palabra letra
    if(argc < 2){
        cout << argv[0] << ": Faltan parametros para ejecutar el programa." << endl;
        cout << "Purebe con: " << argv[0] << " --help para mas informacion." << endl;
        exit(EXIT_SUCCESS);
    }
    string parameter{argv[1]};
    if(parameter == "--help"){
        cout << kHelpText << endl;
        exit(EXIT_SUCCESS);
    }
}

int posLetra(string palabra, string letra){
    int posLetra = 0;
    int tam = palabra.length();
    string letraDePalabra;
    for(int i = 0; i <= tam; ++i){
        letraDePalabra = palabra[i];
        if(letra == letraDePalabra){
            posLetra = i+1;
            break;
        }else{
            posLetra = -1;
        }
    }
    return posLetra;
}