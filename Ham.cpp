#include <string>
#include "Food.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string tipo, string marca, float peso) : Food(valor)
   {
   this->tipo = tipo;
   this->marca = marca;
   this->peso = peso;
   };
   
string Ham::getDescricao()
   { 
   return ("Ham " + tipo + " - " + marca + " - " + to_string(peso) + " Kg."); 
   };