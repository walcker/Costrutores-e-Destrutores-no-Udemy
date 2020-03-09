#include <string>
#include "carro.h"

using namespace std;

void carro::setMarca(string x){
  marca = x;
}

string carro::getMarca(){
  return marca;
}

void  carro::setAno(int y){
  if( y > 1990){
          ano = y;
        }else{
          ano = 1990;
        }
}

int carro::getAno(){
  return ano;
}