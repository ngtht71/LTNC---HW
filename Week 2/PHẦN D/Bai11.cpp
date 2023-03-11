#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main ()
{
    int Min, Max, step_size;
    cin >> Min >> Max >> step_size;

    int Fahrenheit = Min;
    double Celsius, Kelvin;

    cout << "Fahrenheit \t" << "Celsius \t" << "Absolute Value" << endl;

    while (Fahrenheit <= Max)
    {
        Celsius = 1.0*(Fahrenheit - 32) * 5 /9;
        Kelvin = Celsius + 273.15;
        cout << setprecision (2) << fixed << Fahrenheit << "\t\t"
                                          << Celsius << "\t\t"
                                          << Kelvin << endl;
        Fahrenheit += step_size;
    }
    return 0;
}

