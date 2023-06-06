
#ifndef A02EX03_I_H
#define A02EX03_I_H

#include <string>
#include "Food.hpp"
#include "Cheese.hpp"

using namespace std;

class cottageCheese : public Cheese
   {
   private:
      string marca;
      float peso;
      
   public:
      cottageCheese(string, float);
      virtual string getDescricao();
   };
   
#endif