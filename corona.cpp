
#include <string>
#include "beer.hpp"
#include "corona.hpp"

using namespace std;

Corona::Corona(string brandy, float volume,string marca, string tipo, double valor) : Beer(marca,tipo, valor){
			this->volume = volume;
			this->brandy= brandy;
};

string Corona::getDescricao()
{
    return( "Corona "+ brandy + " " + to_string(volume) + " ml");
};

