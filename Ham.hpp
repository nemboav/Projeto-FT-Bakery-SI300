#ifndef A02EX03_G_H
#define A02EX03_G_H

#include <string>
#include "Food.hpp"

using namespace std;

class Ham : public Food
   {
   private:
      string tipo;
      string marca;
      float peso;
      
   public:
      Ham(string, string, float);
      virtual string getDescricao();
   };
   
#endif