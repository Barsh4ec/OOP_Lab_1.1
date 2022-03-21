#pragma once

class FloatPower
{
private:
    int first, second;
public:
    int GetFirst()  { return first; }
    int GetSecond() { return second; }
    void SetFirst(int value) { first = value; }
    void SetSecond(int value) { second = value; }

    bool Init(double x, double y);
    void Display();
    void Read();
    double Power();
};