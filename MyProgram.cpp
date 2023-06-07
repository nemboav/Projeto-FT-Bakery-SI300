
#include <string>
#include <vector>
#include <iostream>
#include "MyProgram.hpp"
#include "MyBoolean.hpp"
#include "Menu.hpp"
#include "Food.hpp"
#include "Information.hpp"
#include "FT_Bakery.hpp"
#include "Cracker.hpp"
#include "FilledWafer.hpp"
#include "Cheese.hpp"
#include "Ham.hpp"
#include "Bread.hpp"
#include "Mortadella.hpp"
#include "CottageCheese.hpp"

using namespace std;

MyProgram::MyProgram(string name){        
   this->name = name;  
};

//FUNCOES SET
void MyProgram::setVerboseMode(MyBooleanClass * verboseMode) {
    this->verboseMode = verboseMode;
};

void MyProgram::setShortMessageMode(MyBooleanClass * shortMessageMode) {
    this->shortMessageMode = shortMessageMode;
};

//FUNCOES GET
MyBooleanClass * MyProgram::getVerboseMode(){
    return this->verboseMode;
};

 MyBooleanClass * MyProgram::getShortMessageMode(){
     return this->shortMessageMode;
 };
 

void MyProgram::start(){
   myMainList.clear();
   Information::wellcome("C++ Program " + name + " running!", shortMessageMode->getValue());
   process();
   Information::bye(shortMessageMode->getValue());
   clearAll();
};

void MyProgram::process(){
   vector<string> opcoes({ "Exit", "List Database", "Insert Items", "Clear All" });
   Menu menu("Main Menu", opcoes);
   int escolha = -1;
   
   while(escolha){
      escolha = menu.getEscolha();
 
      switch(escolha){
 	       case 1: { listItems();    }; break;
 	       case 2: { insertItems();  }; break;
      };
   };
};

void MyProgram::clearAll(){

   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
        delete (*scan);
        *scan = NULL;
        scan++;
      };
  myMainList.clear();

    delete verboseMode;
    delete shortMessageMode;
    verboseMode = NULL;
    shortMessageMode = NULL;      
};


void MyProgram::listItems(){
   double total = 0.00;
      
   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getvalue() << endl;
      total +=  (*scan)->getvalue();
      scan++;
      };
   cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void MyProgram::insertItems(){
   cout << "------------------------------\nInsert New Items:\n------------------------------\n";
  
   Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella"});
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
        {
 	        case 1:  
            { 
                insertBread();         
            }; 
                break;
 	        case 2:  
            { 
                insertCheese();        
            }; 
                break;
            case 3:  
            { 
                insertCottageCheese(); 
            }; 
                break;
            case 4:  
            { 
                insertCracker();       
            }; 
                break;
            case 5:  
            { 
                insertFilledWafer();   
            }; 
                break;
            case 6:  
            { 
                insertHam();           
            }; 
                break;
            case 7:  
            { 
                insertMortadella();    
            }; 
                break;

         };
      };
   };

void MyProgram::insertBread() {
   Bread * bread;
   string buffer;
   string type;
   float  weight;
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
   
   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);
   
   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getvalue() << endl;   
   };
   
void MyProgram::insertCracker(){
   Cracker * cracker;
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
   
   cracker = new Cracker(type, amount,cost);
   myMainList.insert(myMainList.end(), cracker);
   
   cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getvalue() << endl;   
};

void MyProgram::insertFilledWafer(){
   FilledWafer * filledWafer;
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
   
   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);
   
   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getvalue() << endl;   
};

void MyProgram::insertHam(){
   Ham * ham;
   string buffer;
   string type;
   float weight;
   int amount;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Type ......: "; 
   getline(cin, buffer); 
   type = buffer;
   cout << "Weight ....: "; 
   getline(cin, buffer); 
   weight = stof(buffer);
   cout << "Amount ....: "; 
   getline(cin, buffer); 
   amount = stoi(buffer);
   cout << "Cost ......: "; 
   getline(cin, buffer); 
   cost = stod(buffer);
   cin.clear();
   
   ham = new Ham(type, amount, weight,cost);
   myMainList.insert(myMainList.end(), ham);
   
   cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getvalue() << endl;   
};

void MyProgram::insertMortadella() {
   Mortadella * mortadella;
   string buffer;
   string type;
   float weight;
   double cost;

   cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
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
   
   mortadella = new Mortadella(type, weight,cost);
   myMainList.insert(myMainList.end(), mortadella);
   
   cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getvalue() << endl;   
   };

void MyProgram::insertCheese(){
   Cheese * cheese;
   string buffer;
   string type;
   float weight;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
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
   
   cheese = new Cheese(type, weight,cost);
   myMainList.insert(myMainList.end(), cheese);
   
   cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getvalue() << endl;   
};

void MyProgram::insertCottageCheese(){
   CottageCheese * cottageCheese;
   string buffer;
   string type;
   string filling;
   float amount;
   double cost;

   cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
   cout << "Filling ...: "; 
   getline(cin, filling);
   cout << "Amount ....: "; 
   getline(cin, buffer); 
   amount = stoi(buffer);
   cout << "Cost ......: "; 
   getline(cin, buffer); 
   cost = stod(buffer);
   cin.clear();
   
   cottageCheese = new CottageCheese(type,filling, amount,cost);
   myMainList.insert(myMainList.end(), cottageCheese);
   
   cout << endl << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getvalue() << endl;   
};




