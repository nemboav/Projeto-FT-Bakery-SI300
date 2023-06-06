#include "FT_Bakery.hpp"
#include "myProgram.hpp"

int main(int argc, char* argv[]) {
    verifyArguments(argc, argv);

    MyProgram* program = new MyProgram();
    program->setVerboseMode(true);
    program->setShortMessageMode(false);
    program->start();

    delete program;

    return 0;
}
