/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef cracker_H
#define cracker_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cracker : public Food
   {
   private:
      string type;
      int amount;
      
   public:
      Cracker(string, int, double);
      virtual string getDescricao();
   };
   
#endif

/* fim de arquivo */