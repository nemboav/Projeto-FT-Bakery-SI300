
#include <string>
#include "food.hpp"
#include "liquid.hpp"

using namespace std;

Liquid::Liquid(string tipo, double valor) : Food(valor)
   {
   this->tipo = tipo;
   };

string Liquid::getDescricao()
   { 
   return (tipo); 
   };