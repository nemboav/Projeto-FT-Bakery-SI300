#ifndef A02EX03_B_H
#define A02EX03_B_H

#include <string>

using namespace std;

class Food
   {
   protected:
      double valor;
      
   public:
      Food(double);
      virtual double getValor();

      virtual string getDescricao() = 0;
   };
   
#endif