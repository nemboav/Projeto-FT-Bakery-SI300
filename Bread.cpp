#include <string>
#include "Food.hpp"
#include "Bread.hpp"

using namespace std;

Bread::Bread(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Bread::getDescricao()
   { 
   return ("Bread " + tipo + " - " + to_string(peso) + " Kg."); 
   };