#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int Fahrenheit = 0;
    double Celsius, Kelvin;

    cout << "Fahrenheit \t" << "Celsius \t" << "Absolute Value" << endl;

    while (Fahrenheit <= 300)
    {
        Celsius = 1.0*(Fahrenheit - 32) * 5 /9;
        Kelvin = Celsius + 273.15;
        cout << setprecision (2) << fixed << Fahrenheit << "\t\t"
                                          << Celsius << "\t\t"
                                          << Kelvin << endl;
        Fahrenheit += 20;
    }
    return 0;
}

