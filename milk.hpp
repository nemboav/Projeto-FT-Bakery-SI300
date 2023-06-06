#ifndef MILK_H
#define MILK_H

#include <string>
#include "liquid.hpp"

using namespace std;

class Milk : public Liquid
{
private:
    string marca;
    double volume;

public:
    Milk(string, string, double, double);
    virtual string getDescricao();
};

#endif