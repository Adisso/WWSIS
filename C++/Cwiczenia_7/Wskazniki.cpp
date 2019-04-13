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

    int **tab;
    tab = new int *[n];
    for(int i = 0; i < n; i++)
    {
        tab[i] = new int [m];
    }

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
    int *tablicaMinimum;
    tablicaMinimum = new int [n];
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
    int *tablicaMaximum;
    tablicaMaximum = new int [n];
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
    int *tablicaSredniej;
    tablicaSredniej = new int [n];
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

    //Usuwanie tablicy
    for(int i = 0; i < n; i++)
    {
        delete [] tab[i];
    }
    delete[] tab;
    tab = NULL;
    delete[] tablicaMaximum;
    tablicaMaximum = NULL;
    delete[] tablicaMinimum;
    tablicaMinimum = NULL;
    delete[] tablicaSredniej;
    tablicaSredniej = NULL;
}
