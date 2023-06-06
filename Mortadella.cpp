#include <string>
#include "Food.hpp"
#include "Mortadella.hpp"

using namespace std;

Mortadella::Mortadella(string tipo, string marca, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->marca = marca;
   this->peso = peso;
   };
   
string Mortadella::getDescricao()
   { 
   return ("Mortadella " + tipo + " - " + marca + " - " + to_string(peso) + " Kg."); 
   };