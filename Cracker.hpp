#ifndef cracker_H
#define cracker_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cracker : public Food
   {
   private:
      string type;
      int amount;
      
   public:
      Cracker(string, int, double);
      virtual string getDescricao();
   };
   
#endif
