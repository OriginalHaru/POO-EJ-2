#include <iostream>
#include <string>
#include "Camion.hpp"

using namespace std;


int main()
{

Camion obj1("Ford",10);
Camion obj2("Scania",20);

obj1.Consumo("Ford",10);
obj2.Consumo("Scania",10);


return 0;
}