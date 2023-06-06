#ifndef MY_PROGRAM_HPP
#define MY_PROGRAM_HPP

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "Menu.hpp"
#include "myProgram.hpp"
#include "Information.hpp"
#include "Food.hpp"
#include "Bread.hpp"
#include "Cracker.hpp"
#include "FilledWafer.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Ham.hpp"
#include "Mortadella.hpp"
#include "myBoolean.hpp"

class MyProgram {
private:
    MyBooleanClass* verboseMode;
    MyBooleanClass* shortMessageMode;
    std::vector<Food*> myMainList;

public:
    MyProgram();
    ~MyProgram();

    void setVerboseMode(bool mode);
    void setShortMessageMode(bool mode);
    bool getVerboseMode() const;
    bool getShortMessageMode() const;

    void start();

private:
    void process();
    void clearAll();
    void listItems();
    void insertItems();
    void insertBread();
    void insertCracker();
    void insertFilledWafer();
};

#endif 
