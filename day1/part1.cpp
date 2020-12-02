#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream fichier("input.txt");
    vector <int> number;

    if (fichier)
    {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues

        while (getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
            number.push_back(atoi(ligne.c_str()));
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
    cout << "end read of file"; 
    for (int i = 0; i < number.size(); i++)
    {
        for (int j = i+1; j < number.size(); j++)
        {

                if (number[i] + number[j] == 2020)
                {
                    cout << number[i] * number[j];
                }
        }

    }

    return 0;
}
