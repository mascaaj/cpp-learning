#include "ops.h"

int main()
{
    Calculator* pCalc = new Calculator;
    pCalc -> launch();

    while (pCalc->run())
    {
        pCalc -> readInput();
        pCalc -> writeOutput();
    }
}