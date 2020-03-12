#include <string>
#include <iostream>
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

carro::carro(){
  marca = "fiat";
}

carro::carro(string x, int y){
  marca = x;
  ano = y;
}

carro::~carro(){
  cout << "Carro foi destruido" << endl;
}