#include <iostream>
#include <cstdlib>

using namespace std;

int wczytaj()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    return liczba;
}

void wypisz(int liczba)
{
    cout << liczba << endl;
}

void wypisz(double liczba)
{
    cout << liczba << endl;
}

int maksymalnaLiczbaZ(int tab[])
{
    int maks = tab[0];
    for(int i = 1; i < 4; i++)
    {
        if(tab[i] > maks)
            maks = tab[i];
    }
    return maks;
}

int minimalnaLiczbaZ(int tab[])
{
    int mini = tab[0];
    for(int i = 1; i < 4; i++)
    {
        if(tab[i] < mini)
            mini = tab[i];
    }
    return mini;
}

double sredniaZ(int tab[])
{
    double suma = 0;
    for(int i = 0; i < 4; i++)
    {
        suma += tab[i];
    }
    double srednia = suma/4;
    return srednia;
}

double somethingWeird(int tab[])
{
    double something = (tab[0]+tab[1])/(tab[2]+tab[3]);
    return something;
}

double sredniaWazonaZ(int tab[])
{
    double suma;
    double mnoznik = 0.1;
    for(int i = 0; i < 4; i++)
    {
        suma += tab[i] * mnoznik;
        mnoznik += 0.1;
    }
    double srednia = suma/(0.1 + 0.2 + 0.3 + 0.4);
    return srednia;
}

void wyswietlMenu()
{
    cout << "Wcisnij: " << endl;
    cout << "1 - Jesli chcesz wyswietlic maksymalna wartosc wprowadzonych liczb." << endl;
    cout << "2 - Jesli chcesz wyswietlic minimalna wartosc wprowadzonych liczb." << endl;
    cout << "3 - Jesli chcesz policzyc srednia." << endl;
    cout << "4 - Jesli chcesz obliczyc (a+b)/(c+d)." << endl;
    cout << "5 - Jesli chcesz obliczyc srednia wazona" << endl;
    cout << "6 - Jesli chcesz wyjsc" <<endl;
    cout << "7 - Jesli chcesz wczytac nowe liczby" << endl;
}

void wybierzOpcje(int opcja, int tablica[])
{
    switch(opcja)
    {
    case 1:
        wypisz(maksymalnaLiczbaZ(tablica));
        break;
    case 2:
        wypisz(minimalnaLiczbaZ(tablica));
        break;
    case 3:
        wypisz(sredniaZ(tablica));
        break;
    case 4:
        wypisz(somethingWeird(tablica));
        break;
    case 5:
        wypisz(sredniaWazonaZ(tablica));
        break;
    case 6:
        exit(0);
        break;
    case 7:
    {
        int a = wczytaj();
        int b = wczytaj();
        int c = wczytaj();
        int d = wczytaj();

        int tablica[3];
        tablica[0] = a;
        tablica[1] = b;
        tablica[2] = c;
        tablica[3] = d;
        break;
    }

    default:
        cout << "Niepoprawna wartosc" << endl;
        break;
    }
}

int main()
{
    int a = wczytaj();
    int b = wczytaj();
    int c = wczytaj();
    int d = wczytaj();

    int tablica[3];
    tablica[0] = a;
    tablica[1] = b;
    tablica[2] = c;
    tablica[3] = d;

    while(1)
    {
        wyswietlMenu();
        int opcja = wczytaj();
        wybierzOpcje(opcja, tablica);
    }

}
