/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Cracker.hpp"

using namespace std;

Cracker::Cracker(string type, int amount, double cost) : Food(cost)
   {
      this->type     = type;
      this->amount = amount;
   };
   
string Cracker::getDescricao()
   { 
   return ("Cracker " + type + " - " + to_string(amount) + " packets."); 
   };

/* fim de arquivo */