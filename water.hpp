#ifndef WATER_H
#define WATER_H

#include <string>
#include "liquid.hpp"

using namespace std;

class Water : public Liquid
{
private:
    string marca;
    double volume;

public:
    Water(string, string, double, double);
    virtual string getDescricao();
};

#endif