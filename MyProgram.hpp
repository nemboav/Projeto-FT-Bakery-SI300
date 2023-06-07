/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/
#ifndef MYPROGRAM_H
#define MYPROGRAM_H

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "MyBoolean.hpp"
#include "Food.hpp"

using namespace std;


class MyProgram {

    private:
        string name ;


        MyBooleanClass * verboseMode = nullptr;
        MyBooleanClass * shortMessageMode = nullptr;
        vector<Food *> myMainList;

        void process(void);
        void clearAll(void);

        void listItems(void);
        void insertItems(void);
        void insertBread(void);
        void insertCracker(void);
        void insertFilledWafer(void);
        void insertHam(void);
        void insertMortadella(void);
        void insertCheese(void);
        void insertCottageCheese(void);

        

    public:

        MyProgram(string name);
        ~MyProgram();
        void start();

        MyBooleanClass *getVerboseMode();
        MyBooleanClass *getShortMessageMode();

        void setShortMessageMode(MyBooleanClass * shortMessageMode);
        void setVerboseMode(MyBooleanClass * verboseMode);
        
};

#endif

/* fim de arquivo */