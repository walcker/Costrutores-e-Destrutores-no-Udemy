#ifndef CARRO_H
#define CARRO_H
#include <string>

using namespace std;

class carro{

    private:
      string marca;
      int ano;

    public:
      void setMarca(string x);
      string getMarca();
      void setAno(int y);
      int getAno();
};

#endif