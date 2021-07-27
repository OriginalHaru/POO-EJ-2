#pragma once
#include <iostream>
#include <string>

using namespace std;

class Camion
{     
    private:
        string marca;
    
    public:
        Camion(){}
        Camion(string _marca);
        ~Camion(){}
        void Consumo(string marca);
};

 Camion::Camion(string _marca)
 {
     marca = _marca;
 };
  
    void Camion::Consumo(string _marca)
{ 
 int consumo;
    if ( _marca == "Scania")
    {
        consumo = (10 * 40) / 100;
        cout << "El camion marca Scania consumio " << consumo << " litros de nafta en 10 km" << endl;
    }
    else
    {
        consumo = (10 * 50) / 100;
        cout << "El camion marca Ford consumio " << consumo << " litros de nafta en 10 km" << endl;

    }

};


