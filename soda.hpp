#ifndef SODA_H
#define SODA_H

#include <string>
#include "liquid.hpp"

using namespace std;

class Soda : public Liquid
{
private:
    string marca;
    double volume;

public:
    Soda(string, string, double, double);
    virtual string getDescricao();
};

#endif