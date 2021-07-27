#include <iostream>
#include <string>
#include "Camion.hpp"

using namespace std;


int main()
{

Camion obj1("Ford");
Camion obj2("Scania");

obj1.Consumo("Ford");
obj2.Consumo("Scania");


return 0;
}