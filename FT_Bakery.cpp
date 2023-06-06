#include "FT_Bakery.hpp"
#include "myProgram.hpp"

int main(int argc, char* argv[]) {
    verifyArguments(argc, argv);

    MyProgram program;
    program.start();

    return 0;
}
