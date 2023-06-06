#include <string>
#include "Food.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"

using namespace std;

cottageCheese::cottageCheese(string marca, float peso) : Food(), Cheese("")
   {
    this->marca = marca;
    this->peso = peso;
   };
   
string cottageCheese::getDescricao()
   { 
   return ("CottageCheese " + marca + " - " + to_string(peso) + " Kg."); 
   };