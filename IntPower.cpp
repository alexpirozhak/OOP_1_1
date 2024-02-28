//
// Created by Олександр Пірожак on 28.02.2024.
//

#include "IntPower.h"
#include <iostream>

using namespace std;

double IntPower::getFirst() const
{
    return first;
}

void IntPower:: setFirst(double newFirstValue)
{
    if (newFirstValue == 0)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->first = newFirstValue;
}

int IntPower:: getSecond() const
{
    return second;
}
void IntPower:: setSecond(int newSecondValue)
{
    this->second = newSecondValue;
}

bool IntPower:: Init(double value1, int value2)
{
    if (value1 == 0)
    {
        this->first = 1;
        return false;
    }

    this->first = value1;
    this->second = value2;
    return true;
}

void IntPower::Read()
{
    double  f;
    cout << "Enter first: ";
    cin >> f;
    if (f == 0)
    {
        cout << "Invalid value" << endl;
        return;
    }
    first = f;
    cout << "Enter second: ";
    cin >> second;
}

void IntPower::Display() const
{
    cout << "First = " << first << "; Second = " << second << endl;
    cout << getFirst() << "^" << getSecond() << " = " << power() << endl;
}

double IntPower::power() const
{
    double result = 1;
    if (second >= 0)
        for (int i = 0; i < second; i++)
            result *= first;
    else
        for (int i = 0; i < -second; i++)
            result /= first;

    return result;
}

IntPower makeIntPower(double  value1, int value2)
{
    IntPower ip;
    if(!ip.Init(value1, value2))
        cout << "Invalid value" << endl;

    return ip;
}
