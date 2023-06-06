#ifndef A02EX03_H_H
#define A02EX03_H_H

#include <string>
#include "Food.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string tipo;
      string marca;
      float peso;
      double valor;
      
   public:
      Mortadella(string, string, float, double);
      virtual string getDescricao();
   };
   
#endif