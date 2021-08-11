#pragma once
#include <iostream>
#include <string>

using namespace std;

class Camion
{     
    private:
        string marca;
        int distancia;
    public:
        Camion(){}
        Camion(string _marca,int distancia);
        ~Camion(){}
        void Consumo(string marca, int distancia);
};

 Camion::Camion(string _marca,int _distancia)
 {
     marca = _marca;
     distancia = _distancia;
 };
  
    void Camion::Consumo(string _marca,int _distancia)
{ 
    int consumo;
        if ( _marca == "Scania")
        {
        consumo = (distancia * 40) / 100;
        cout << "El camion marca Scania consumio " << consumo << " litros de nafta en " << distancia << "km" <<endl;
        }
        else
        {
        consumo = (distancia * 50) / 100;
        cout << "El camion marca Ford consumio " << consumo << " litros de nafta en "<< distancia << "km" << endl;
        }

};


