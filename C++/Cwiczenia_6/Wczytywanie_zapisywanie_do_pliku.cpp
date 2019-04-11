#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream dane;
    dane.open("dane.txt");

    if(!dane.good())
    {
        cout << "Nie mozna otworzyc pliku" << endl;
        return 0;
    }

    // Wczytywanie danych do tablicy z pliku.
    int n, m;
    dane >> n >> m;
    static int tab[1000][1000];
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j++)
        {
            dane >> tab[i][j];
        }
    }
    dane.close();

    // Obliczanie minimum
    int minimum = tab[0][0];
    static int tablicaMinimum[1000];
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j++)
        {
            if(minimum > tab[i][j])
            {
                minimum = tab[i][j];
            }
        }
        tablicaMinimum[i] = minimum;
        int minimum = tab[i][0];
    }

    // Obliczanie maximum
    int maximum = 0;
    static int tablicaMaximum[1000];
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j++)
        {
            if(maximum < tab[i][j])
            {
                maximum = tab[i][j];
            }
        }
        tablicaMaximum[i] = maximum;
        maximum = 0;
    }

    // Obliczanie sredniej
    int licznik = 0;
    int sumaWiersza = 0;
    static int tablicaSredniej[1000];
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j++)
        {
            sumaWiersza += tab[i][j];
            licznik++;
        }
        tablicaSredniej[i] = sumaWiersza/licznik;
        sumaWiersza = 0;
        licznik = 0;
    }

    // Wypisanie tablic do pliku.
    ofstream wpis;
    wpis.open("minmax.txt");
    if(!wpis.good())
    {
        cout << "Nie mozna otworzyc pliku" << endl;
        return 0;
    }
    wpis << "max:   " << "min:   " << "avg:" << endl;
    for(int i = 0; i < n; i ++)
    {
            wpis << tablicaMaximum[i] << "    " << tablicaMinimum[i] << "     " << tablicaSredniej[i] << endl;
    }
    wpis.close();
    cout << "Udalo sie wpisac do pliku minmax.txt" << endl;
}
