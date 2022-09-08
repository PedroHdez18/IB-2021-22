#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
void Foreword() {
  std::cout << "Este programa calcula la suma, producto, el n max, n min y la media de un vector de numeros aleatorios." << std::endl << std::endl;
}
double MediaVector(std::vector<double> vector_introducido,int tamanio_vector){
  int i;
  double media_vector=0;
  for(i=0;i!=tamanio_vector;i++){
    media_vector=media_vector+vector_introducido[i];
  }
  media_vector=media_vector/tamanio_vector;
  return media_vector;
}
int NumeroMaximo(std::vector<double> vector_introducido,int tamanio_vector){
  int i, almacen_i;
  double comprobador_mayor=0;
  for(i=0;i!=tamanio_vector;i++){
    if(comprobador_mayor<vector_introducido[i]){
      comprobador_mayor=vector_introducido[i];
      almacen_i=i;
    }
  } 
  return almacen_i; 
}
int NumeroMenor(std::vector<double> vector_introducido,int tamanio_vector){
  int i, almacen_i;
  double comprobador_menor=vector_introducido[NumeroMaximo(vector_introducido,tamanio_vector)]+1;
  for(i=0;i!=tamanio_vector;i++){
    if(comprobador_menor>vector_introducido[i]){
      comprobador_menor=vector_introducido[i];
      almacen_i=i;
    }
  } 
  return almacen_i; 
}
float SumaNumeros(std::vector<double> vector_introducido){
  int i;
  float numero_final=0;
  for(i=0;i!=vector_introducido.size();i++){
    numero_final= numero_final+vector_introducido[i];
  } 
  return numero_final;
}
float ProductoNumeros(std::vector<double> vector_introducido){
  int i;
  float numero_final=1;
  for(i=0;i!=vector_introducido.size();i++){
    numero_final=numero_final*vector_introducido[i];
  }
  return numero_final;
}