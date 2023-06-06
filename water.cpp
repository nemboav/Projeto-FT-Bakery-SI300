
#include <string>
#include "liquid.hpp"
#include "water.hpp"

using namespace std;

Water::Water(string tipo, string marca, double volume, double valor) : Liquid(tipo, valor)
   {
   this->marca = marca;
   this->volume = volume;
   };
   
string Water::getDescricao()
   { 
   return ("Água " + marca + " - " + to_string(volume) + " litros"); 
   };