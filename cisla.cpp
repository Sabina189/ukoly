#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main ()
{
    ifstream soubor ("souborcisel.txt");
    vector <int> cisla;

    int cislo;
    

    while (soubor >> cislo) {
        cisla.push_back(cislo);
    }
    for (int i = 0; i < cisla.size(); i++) {
        cout << cislo[i] << endl;
    }
    soubor.close();

    for (int i = 0; i < cisla.size(); i++) {
        for (int j = 0; j < cisla.size (); j++) {
            if (cisla[i] + cisla[j] == 2020)

            {
                cout << "cisla a, b jsou: " << endl;
                cout << cisla [i] << endl;
                cout << cisla [j] << endl;
                cout << "soucet cisel a b je: " << endl;
                cout << cisla[i] + cisla[j] << endl;
                cout << "soucin cisel a, b je: " << endl;
                cout << cisla [i] * cisla[j] << endl;
            }
        }
    }
}