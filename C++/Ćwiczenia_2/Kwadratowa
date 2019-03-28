#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Podaj wspolczynnik a" << endl;
    cin >> a;
    cout << "Podaj wspolczynnik b" << endl;
    cin >> b;
    cout << "Podaj wspolczynnik c" << endl;
    cin >> c;

    if(a == 0)
    {
        cout << "To nie jest funkcja kwadratowa." << endl;
    }
    else
    {
        double delta = b*b-4*a*c;

        if(delta > 0)
        {
            double x1 = (-b + sqrt(delta))/(2*a);
            double x2 = (-b - sqrt(delta))/(2*a);
            cout << "X1 = " << x1 << "\nX2 = " << x2 << endl;
        }
        else if(delta == 0)
        {
            double x = -b/(2*a);
            cout << "X = " << x << endl;
        }
        else
        {
            cout << "Nie ma rozwiazan w zbiorze liczb rzeczywistych" << endl;
        }
    }
    return 0;
}
