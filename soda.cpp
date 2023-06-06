
#include <string>
#include "liquid.hpp"
#include "soda.hpp"

using namespace std;

Soda::Soda(string tipo, string marca, double volume, double valor) : Liquid(tipo, valor)
   {
   this->marca = marca;
   this->volume = volume;
   };
   
string Soda::getDescricao()
   { 
   return ("Soda " + marca + " - " + to_string(volume) + " litros"); 
   };