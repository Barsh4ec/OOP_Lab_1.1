#include <iostream>
#include <iomanip>
#include "FloatPower.h"
using namespace std;

FloatPower makeFloatPower(double x, double y)
{
    FloatPower a;
    if (!a.Init(x, y))
        cout << "Wrong arguments to Init(First = 0)" << endl;
    return a;
}
int main()
{
    FloatPower a;
    a.Read();
    a.Power();
    makeFloatPower(a.GetFirst(), a.GetSecond());
    a.Display();
 return 0;
}
