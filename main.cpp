#include "application.h"

Application program;

int main(int argc, char* argv[])
{
    program.init(argc, argv);
    program.run();
    return program.finish();
}
