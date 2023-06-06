#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "myProgram.hpp"
#include "myBoolean.hpp"
#include "Information.hpp"
#include "Menu.hpp"
#include "Food.hpp"
#include "Bread.hpp"
#include "Cracker.hpp"
#include "FilledWafer.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Ham.hpp"
#include "Mortadella.hpp"

using namespace std;

class MyProgram
{
private:
    MyBooleanClass* verboseMode;
    MyBooleanClass* shortMessageMode;
    vector<Food*> myMainList;

public:
    MyProgram()
    {
        verboseMode = nullptr;
        shortMessageMode = nullptr;
    }

    ~MyProgram()
    {
        clearAll();
        delete verboseMode;
        delete shortMessageMode;
    }

    void setVerboseMode(bool value)
    {
        if (verboseMode)
        {
            delete verboseMode;
        }
        verboseMode = new MyBooleanClass(value);
    }

    void setShortMessageMode(bool value)
    {
        if (shortMessageMode)
        {
            delete shortMessageMode;
        }
        shortMessageMode = new MyBooleanClass(value);
    }

    bool getVerboseMode()
    {
        if (verboseMode)
        {
            return verboseMode->getStatus();
        }
        return false; 
    }

    bool getShortMessageMode()
    {
        if (shortMessageMode)
        {
            return shortMessageMode->getStatus();
        }
        return false; 
    }

    void start() {
        myMainList.clear();
        Information::wellcome("C++ Program running!", getShortMessageMode());
        process();
        Information::bye(getShortMessageMode());
        clearAll();
    }

    void process()
    {
        vector<string> opcoes({ "Exit", "List Database", "Insert Items", "Clear All" });
        Menu menu("Main Menu", opcoes);
        int escolha = -1;

        while (escolha)
        {
            escolha = menu.getEscolha();

            switch (escolha)
            {
                case 1:
                {
                    listItems();
                    break;
                }
                case 2:
                {
                    insertItems();
                    break;
                }
            }
        }
    }

private:
    void clearAll()
    {
        myMainList.clear();

        for (auto scan = myMainList.begin(); scan != myMainList.end(); ++scan)
        {
            delete *scan;
            *scan = nullptr;
        }
    }

    void listItems()
    {
        double total = 0.00;

        cout << "------------------------------\nItems in Database:\n------------------------------\n";
        
        for (auto scan = myMainList.begin(); scan != myMainList.end(); ++scan)
        {
            cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
            total += (*scan)->getValor();
        }
        
        cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
    }

    void insertItems()
{
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella" });
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
            case 1:
            {
                insertBread();
                break;
            }
            case 2:
            {
                // inserir queijo
                break;
            }
            case 3:
            {
                // inserir queijo cottage
                break;
            }
            case 4:
            {
                insertCracker();
                break;
            }
            case 5:
            {
                insertFilledWafer();
                break;
            }
            case 6:
            {
                // inserir presunto
                break;
            }
            case 7:
            {
                // inserir mortadela
                break;
            }
        }
    }
}

void insertBread()
{
    Bread* bread;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.push_back(bread);

    cout << endl
              << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;
}

void insertCracker()
{
    Cracker* cracker;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.push_back(cracker);

    cout << endl
        << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;
}

void insertFilledWafer()
{
    FilledWafer* filledWafer;
    string buffer;
    string type;
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, type);
    cout << "Filling ...: ";
    
    getline(cin, filling);
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    filledWafer = new FilledWafer(type, filling, amount, cost);
    myMainList.push_back(filledWafer);

    cout << endl
              << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;
}

void verifyArguments(int argc, char* argv[])
{
    if (verboseMode)
    {
        delete verboseMode;
    }
    if (shortMessageMode)
    {
        delete shortMessageMode;
    }

    verboseMode = nullptr;
    shortMessageMode = nullptr;

    for (int count = 1; count < argc; count++)
    {
        if (string(argv[count]) == "-v")
        {
            verboseMode = new MyBooleanClass(true);
        }
        if (string(argv[count]) == "-s")
        {
            shortMessageMode = new MyBooleanClass(true);
        }
    }

    if (!verboseMode)
    {
        verboseMode = new MyBooleanClass(false);
    }
    if (!shortMessageMode)
    {
        shortMessageMode = new MyBooleanClass(false);
    }  
}

void runProgram(int argc, char* argv[])
{
    MyProgram program;
    program.setVerboseMode(true);
    program.setShortMessageMode(true);

    verifyArguments(argc, argv);
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", program.getShortMessageMode());
    program.process();
    Information::bye(program.getShortMessageMode());
} 
};
