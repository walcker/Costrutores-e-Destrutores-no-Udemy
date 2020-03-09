#include <iostream>
#include <string>
#include <cstdlib>
#include "carro.h"

using namespace std;

int main( int argc, char** argv){
    carro c1;
    c1.setMarca("fiat");
    c1.setAno(2017);

    carro c2;
    c2.setMarca("ferrari");
    c2.setAno(1650);

    cout << c1.getMarca() << endl;
    cout << c2.getMarca() << endl;

    cout << c1.getAno() << endl;
    cout << c2.getAno() << endl;

return 0;
}