#include <string>
#include <fstream>
#include <iostream>

using namespace std;
int main()
{
    string dane;
    string lan = "   ";
    int ile = 0, ilosc = 0;
    float liczba = 0, suma = 0, srednia, tab[100]{};

    fstream plik("dane.txt");

    while (getline(plik, dane))
    {
        cout << dane;
        for (int i = 0; i < dane.length(); i++)
        {
            if (dane[i] != ' ') {
                lan[ile] = dane[i];
                ile++;
            }
            else
            {
                ile = 0;
                liczba = stof(lan);
                ilosc++;
                suma += liczba;
                cout << "\n" << liczba;
                tab[ilosc] = liczba;
            }
        }
    }
    cout << "\n";
    for (int i = 0; i < dane.length(); i++)
    {
        if (tab[i] != 0) cout << tab[i] << ", ";
    }
     srednia = suma / ilosc;
    cout << "\nsrednia = " << srednia;
    plik.close();
}

