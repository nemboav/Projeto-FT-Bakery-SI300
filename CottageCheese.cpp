#include <string>
#include "Food.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string marca, float peso) : Food(), Cheese("")
   {
    this->marca = marca;
    this->peso = peso;
   };
   
string CottageCheese::getDescricao()
   { 
   return ("CottageCheese " + marca + " - " + to_string(peso) + " Kg."); 
   };