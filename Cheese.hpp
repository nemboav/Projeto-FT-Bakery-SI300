#ifndef A02EX03_F_H
#define A02EX03_F_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cheese : public Food
  {
    private:
      string tipo;
      int unidades;
      double peso;
  };

#endif