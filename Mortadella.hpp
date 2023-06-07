#ifndef MORTADELLA_H
#define MORTADELLA_H

#include <string>
#include "Food.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Mortadella(string, float, double);
      virtual string getDescricao();
   };
   
#endif