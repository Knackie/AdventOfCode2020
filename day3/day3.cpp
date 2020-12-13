#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream fichier("input_day3.txt");
   
    int arbre = 0;
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
            j = j + 3;
            j = j % nb_ligne;
            if (map[i][j] == '#')
            {
                arbre++;
            }

        }
        cout << arbre;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
    cout << "end read of file";
    
    
    //int count = 0;

    return 0;
}
