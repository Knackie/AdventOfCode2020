#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream fichier("input_day3.txt");
   
    double arbre_1 = 0, arbre_2 = 0, arbre_3 = 0, arbre_4 = 0, arbre_5 = 0;
    int nb_ligne = 0;
    int j = 0;
    vector<string> map;
    if (fichier)
    {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues

        while (getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
            nb_ligne = ligne.length();
            map.push_back(ligne);
            
        }
        for (int i = 1; i < map.size(); i++)
        {
            j = j + 1;
            j = j % nb_ligne;
            if (map[i][j] == '#')
            {
                arbre_1++;
            }

        }
        j = 0;
        for (int i = 1; i < map.size(); i++)
        {
            j = j + 3;
            j = j % nb_ligne;
            if (map[i][j] == '#')
            {
                arbre_2++;
            }

        }
        j = 0;
        for (int i = 1; i < map.size(); i++)
        {
            j = j + 5;
            j = j % nb_ligne;
            if (map[i][j] == '#')
            {
                arbre_3++;
            }

        }
        j = 0;
        for (int i = 1; i < map.size(); i++)
        {
            j = j + 7;
            j = j % nb_ligne;
            if (map[i][j] == '#')
            {
                arbre_4++;
            }

        }
        j = 0;
        for (int i = 2; i < map.size(); i=i+2)
        {
            j = j + 1;
            j = j % nb_ligne;
            if (map[i][j] == '#')
            {
                arbre_5++;
            }

        }
        fixed;
       string result = to_string(arbre_1 * arbre_2 * arbre_3 * arbre_4 *arbre_5);
       cout << result;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
    cout << "end read of file";
    
    
    //int count = 0;

    return 0;
}
