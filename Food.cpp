#include <string>
#include "Food.hpp"

using namespace std;

Food::Food(double valor)
   {
   this->valor = valor;
   };
   
double Food::getValor()
   { 
   return (valor); 
   };