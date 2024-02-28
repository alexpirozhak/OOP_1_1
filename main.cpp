#include <iostream>
#include "IntPower.h"

using namespace std;

int main()
{
    IntPower ip = makeIntPower(3, 4);
    cout << ip.getFirst() << "^" << ip.getSecond() << " = " << ip.power() << endl;

    ip.setFirst(2);
    ip.setSecond(-3);
    cout << ip.getFirst() << "^" << ip.getSecond() << " = " << ip.power() << endl;

    ip.Read();
    ip.Display();

    return 0;
}