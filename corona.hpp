#ifndef CORONA_H
#define CORONA_H

#include <string>
#include "beer.hpp"

using namespace std;

class Corona : public Beer
{
private:
 			float volume;
 			string brandy;
public:
    Corona(string,float,string,string, double);
    virtual string getDescricao();
};

#endif
