#ifndef A02EX03_D_H
#define A02EX03_D_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cracker : public Food
   {
   private:
      string tipo;
      int unidades;
      
   public:
      Cracker(string, int, double);
      virtual string getDescricao();
   };
   
#endif
