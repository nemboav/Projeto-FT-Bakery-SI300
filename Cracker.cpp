#include <string>
#include "Food.hpp"
#include "Cracker.hpp"

using namespace std;

Cracker::Cracker(string tipo, int unidades, double valor) : Food(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Cracker::getDescricao()
   { 
   return ("Cracker " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
