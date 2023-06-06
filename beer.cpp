
#include <string>
#include "liquid.hpp"
#include "beer.hpp"

using namespace std;

Beer::Beer(string tipo, string marca, double valor) : Liquid(tipo, valor)
   {
   this->marca = marca;
   };
   
string Beer::getDescricao()
   { 
   return (marca); 
   };