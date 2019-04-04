#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int tab[300], tab2[10][300], dolnyZakres, gornyZakres, schowek, zamiana;
    char jakPosortowac;
    int licznik = 0;

    cout << "Z jakiego zakresu maja byc liczby? " <<endl;

    cout << "Podaj dolny zakres: ";
    cin >> dolnyZakres;
    cout << "Podaj gorny zakres: ";
    cin >> gornyZakres;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 300; j++)
        {
            tab2[i][j] = (rand() % ((gornyZakres - dolnyZakres) +1 )) + dolnyZakres;
        }
    }
    while(licznik < 10)
    {
        for(int i = 0; i < 300; i ++)
        {
            tab[i] = tab2[licznik][i];
        }
        cout << "\nJak posortowac wiersz " << licznik << "?" << endl;
        cout << "m - malejaco" << endl;
        cout << "r - rosnaco: " << endl;
        cin >> jakPosortowac;

        switch(jakPosortowac)
        {
        case 'r':
            do
            {
                zamiana=0;
                for (int i=0; i < 299; i++)
                {
                    if (tab[i]>tab[i+1])
                    {
                        zamiana=zamiana+1;
                        schowek=tab[i];
                        tab[i]=tab[i+1];
                        tab[i+1]=schowek;
                    }
                }
            }
            while(zamiana!=0);

            for (int j=0; j<=299; j++)
            {
                cout<<tab[j]<<" ";
            }
            break;
        case 'm':
            do
            {
                zamiana=0;  //przed kazdym "przejazdem" petli for zmienna zamiana jest zerowana
                for (int i=0; i < 299; i++)
                {
                    if (tab[i]<tab[i+1])
                    {
                        zamiana=zamiana+1;   //jezli jest jakas zmiana, to zmienne zamiana powieksza swoja wartosc
                        schowek=tab[i];  //wartosc t[i] jest kopiowana do schowka
                        tab[i]=tab[i+1];  //t[i] przyjmuje wartosc nastepnego elementu, gdyz jest on mniejszy
                        tab[i+1]=schowek;  //kolejny element tablicy przejmuje wczesniejsza wartosc poprzedniego elementu, gdyz jest on wiekszy
                    }
                }
            }
            while(zamiana!=0);  //jesli zmienna zamiana mialaby wartosc 0, oznaczaloby to ze nie dokonano zadnych zmian, a wiec nie ma potrzeby dalszego sortowania

            for (int j=0; j<=299; j++)
            {
                cout<<tab[j]<<" ";  // wypisanie posortowanych liczb
            }
            break;
        }
        licznik++;
    }
}
