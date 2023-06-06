#ifndef A02EX03_E_H
#define A02EX03_E_H

#include <string>
#include "Cracker.hpp"

using namespace std;

class FilledWafer : public Cracker
   {
   private:
      string recheio;
      
   public:
      FilledWafer(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif