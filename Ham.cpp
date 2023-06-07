#include <string>
#include "Food.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string type, int amount, float weight, double cost) : Food(cost)
   {
      this->type = type;
      this->amount = amount;
      this->weight = weight;
   };
   
string Ham::getDescricao()
   { 
   return ("Ham " + type + " - " + to_string(amount) + " - " + to_string(weight) + " Kg."); 
   };