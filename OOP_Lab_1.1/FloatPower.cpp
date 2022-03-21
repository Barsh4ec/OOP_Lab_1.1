#include <iostream>
#include <iomanip>
#include <cmath>
#include "FloatPower.h"
using namespace std;

bool FloatPower::Init(double x, double y)
{
    second = y;
    if (x != 0)
    {
        SetFirst(x);
        return true;
    }
    else
    {
        SetFirst(0);
        return false;
    }
}

void FloatPower::Read()
{
    cout << "First = "; cin >> first;
    cout << "Second = "; cin >> second;
}
void FloatPower::Display() 
{
    cout << "result = " << FloatPower::Power() << endl;
}
double FloatPower::Power()
{
    double result;
    result = pow(first, second); 
    return result;
}
