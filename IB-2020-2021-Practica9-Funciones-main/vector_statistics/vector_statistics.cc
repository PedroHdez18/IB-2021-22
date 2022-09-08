#include <iostream>
#include "vector_statistics.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iomanip> 

int main(int argc,char** argv){
  if(argc!=4){
    std::cout<< "Error, por favor introduzca el ejecutable, y tres numeros enteros."<<std::endl;
    return -1;
  }
  Foreword();
  int i=0, segunda_entrada, primera_entrada,tercera_entrada;  
  double numero_aleatorio,valor_decimal, media_vector; 
  //LEER LOS PRIMEROS CARACTERES CON NUMEROS, STRTOL ES STRING TO LONG, LUEGO PASO EL LONG A ENTERO.
  long convertir_primero = strtol(argv[1], 0, 10);
  primera_entrada = convertir_primero;
  long convertir_segundo = strtol(argv[2], 0, 10);
  segunda_entrada = convertir_segundo;
  long convertir_tercero = strtol(argv[3], 0, 10);
  tercera_entrada = convertir_tercero;
  std::vector<double> vector_random(primera_entrada);  //TAMANIO DEL VECTOR CON EL PRIMER VALOR
  srand(time(NULL));
  valor_decimal= tercera_entrada;  //PARA QUE EL NUMERO DE DECIMAL
  for(i=0;i!=primera_entrada;i++){  //FOR PARA LLENAR EL VECTOR CON LOS NUMEROS DECIMALES
    numero_aleatorio=1+tercera_entrada;
    while(numero_aleatorio<segunda_entrada || numero_aleatorio>tercera_entrada){
      numero_aleatorio=std::rand()/valor_decimal;
      }
    vector_random[i]={numero_aleatorio};
  }
  std::cout<<"El vector es: ("<<vector_random[0];
  for(i=1;i!=primera_entrada;i++){
    std::cout<<","<<std::setprecision(3)<< vector_random[i];
  }
  std::cout<<")";
  std::cout<<std::endl<<"La suma de todos los numeros es: "<<SumaNumeros(vector_random)<<std::endl;
  std::cout<<"El producto de todos los numeros es: "<<ProductoNumeros(vector_random)<<std::endl;
  std::cout<<"El numero maximo del vector es: "<<vector_random[NumeroMaximo(vector_random,primera_entrada)]<<std::endl;
  std::cout<<"El numero minimo del vector es: "<<vector_random[NumeroMenor(vector_random,primera_entrada)]<<std::endl;
  std::cout<<"La media de todos los numeros es: "<<MediaVector(vector_random,primera_entrada)<<std::endl;
}
