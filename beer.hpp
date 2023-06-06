#ifndef BEER_H
#define BEER_H

#include <string>
#include "liquid.hpp"

using namespace std;

class Beer : public Liquid
{
private:
    string marca;

public:
    Beer(string, string, double);
    virtual string getDescricao();
};

#endif