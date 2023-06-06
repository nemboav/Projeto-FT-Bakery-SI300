#ifndef A02EX03_C_H
#define A02EX03_C_H

#include <string>
#include "Food.hpp"

using namespace std;

class Bread : public Food
   {
   private:
      string tipo;
      float peso;
      
   public:
      Bread(string, float, double);
      virtual string getDescricao();
   };
   
#endif