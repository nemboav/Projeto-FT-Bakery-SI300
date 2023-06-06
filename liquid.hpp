
#ifndef LIQUID_H
   #define LIQUID_H

#include <string>
#include "food.hpp"

using namespace std;

class Liquid : public Food
   {
   private:
      string tipo;
      
   public:
      Liquid(string, double);
      virtual string getDescricao();
   };
   
#endif
