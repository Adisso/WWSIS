#include <iostream>

using namespace std;

int main()
{
    int input[4];
    int liczbaCykli;
    int przecieciaZera = 0;;
    cout << "Podaj liczbe cykli: " << endl;
    cin >> liczbaCykli;

    while(liczbaCykli > 0){
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> input[0];
    cout << "Podaj druga liczbe" << endl;
    cin >> input[1];
    cout << "Podaj trzecia liczbe" << endl;
    cin >> input[2];
    cout << "Podaj czwarta liczbe" << endl;
    cin >> input[3];

    //Wykonuj do i < 3, czyli az skoncza sie argumenty tablicy.
    for(int i=0; i < 3; i++){
        if(input[i]*input[i+1] < 0){
            przecieciaZera++;
            cout << "Przeciecie wystapilo pomiedzy liczbami " << input[i] << " i " << input[i+1] << endl;
        }
    }
    cout << "Lacznie przeciez zer: " << przecieciaZera << endl;
    liczbaCykli--;
    przecieciaZera = 0;
    }

    return 0;
}
