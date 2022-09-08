/*
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 *
 * @author Pedro Hdez. Alonso
 * @date 9 Nov 2020
 * @brief  El programa imprimir en pantalla el valor medio de 
 *         los datos de un vector 0.00/10.00 asi como los valores minimo y maximo.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  std::srand(std::time(NULL));
  int i, kVectorSize, identificador_vector;
  float numero_1=0,suma_vector=0, variable_random=rand();
  std::cout<< "Introduzca el tamanio que tendra el vector: ";
  std::cin >>kVectorSize;
  float vector_medio[kVectorSize]={};
  std::cout<<std::endl<<"El vector tendria esta forma ( ";

  //FOR PARA LA GENERACION DE LOS NUMEROS ALEATORIOS
  for (int i=0; i != kVectorSize; ++i) {
    float x = 10.01;
    while(x > 10.00 || x<0.00){
      x = 1 + std::rand()/((RAND_MAX+1u)/10.);
      }
    vector_medio[i]={x};
    std::cout << vector_medio[i]<<" ";
    }
  std::cout<<")";

  //FOR PARA LA MEDIA
  for (int i=0; i != kVectorSize; ++i) {suma_vector=suma_vector+vector_medio[i];}
  std::cout<<std::endl<<std::endl<<"La media de los numeros aleatorios del vector es "<< suma_vector/kVectorSize<<std::endl;

  //FOR PARA EL NUMERO MAS GRANDE
  for(i=0 ; i !=kVectorSize ; i++){
    if(numero_1<vector_medio[i]){
    numero_1=vector_medio[i];
    identificador_vector=i;
    }
  }
   std::cout<<"El numero mas grande es "<<vector_medio[identificador_vector]<<std::endl;

   //FOR PARA EL NUMERO MAS PEQUENO
  for(i=0 ; i !=kVectorSize ; i++){
    if(numero_1>vector_medio[i]){
    numero_1=vector_medio[i];
    identificador_vector=i;
    }
  }
  std::cout<<"El numero mas grande es "<<vector_medio[identificador_vector]<<std::endl;

 return 0;
 }