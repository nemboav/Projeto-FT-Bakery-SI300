#ifndef BUDWEISER_H
#define BUDWEISER_H

#include <string>
#include "beer.hpp"

using namespace std;

class Budweiser : public Beer
{
private:
 			float volume;
 			string brandy;
public:
    Budweiser(string,float,string,string, double);
    virtual string getDescricao();
};

#endif
