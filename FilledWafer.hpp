#ifndef FILLED_WAFER
#define FILLED_WAFER

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