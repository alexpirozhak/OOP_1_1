//
// Created by Олександр Пірожак on 28.02.2024.
//

#pragma once

class IntPower {
    double first;
    int second;

public:

    double getFirst() const;
    void setFirst (double newFirstValue);
    int getSecond() const;
    void setSecond (int newSecondValue);
    bool Init(double value1, int value2);
    void Read();
    void Display() const;
    double power() const;
};

IntPower makeIntPower(double  value1, int value2);


