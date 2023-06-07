/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2016
*/

#include <string>
#include "Food.hpp"

using namespace std;

Food::Food(double value)
   {
       this->value = value;
   };
   
double Food::getvalue()
   { 
       return (value); 
   };
   
/* fim de arquivo */