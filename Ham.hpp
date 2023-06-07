#ifndef HAM_H
#define HAM_H

#include <string>
#include "Food.hpp"

using namespace std;

class Ham : public Food
   {
   private:
      string type;
      int amount;
      float weight;
      
   public:
      Ham(string, int, float, double);
      virtual string getDescricao();
   };
   
#endif