
#include <string>
#include "liquid.hpp"
#include "milk.hpp"

using namespace std;

Milk::Milk(string tipo, string marca, double volume, double valor) : Liquid(tipo, valor)
   {
   this->marca = marca;
   this->volume = volume;
   };
   
string Milk::getDescricao()
   { 
   return ("Leite " + marca + " - " + to_string(volume) + " litros"); 
   };