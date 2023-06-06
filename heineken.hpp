#ifndef HEINEKEN_H
#define HEINEKEN_H

#include <string>
#include "beer.hpp"

using namespace std;

class Heineken : public Beer
{
private:
 			float volume;
 			string brandy;
public:
    Heineken(string,float,string,string, double);
    virtual string getDescricao();
};

#endif
