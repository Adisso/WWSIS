#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int tab[300], dolnyZakres, gornyZakres, schowek, zamiana;
    char jakPosortowac;

    cout << "Z jakiego zakresu maja byc liczby? " <<endl;

    cout << "Podaj dolny zakres: ";
    cin >> dolnyZakres;
    cout << "Podaj gorny zakres: ";
    cin >> gornyZakres;

    for(int i = 0; i < 300; i++)
    {
        tab[i] = (rand() % ((gornyZakres - dolnyZakres) +1 )) + dolnyZakres;
    }

    cout << "Jak posortowac? ";
    cout << "m - malejaco";
    cout << "r - rosnaco: ";
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
            zamiana=0;
            for (int i=0; i < 299; i++)
            {
                if (tab[i]<tab[i+1])
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
    }
}

