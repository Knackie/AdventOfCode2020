#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream fichier("input_day2.txt");
    vector <int> min_password, max_password;
    vector <string> letter;
    vector <string> password;
    int correct = 0;
    if (fichier)
    {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues

        while (getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
           
           int pos = ligne.find("-");
           min_password.push_back(atoi(ligne.substr(0, pos).c_str()));
           int pos2 = ligne.find(" ");
           int diff = pos2 - pos;
           max_password.push_back(atoi(ligne.substr(pos+1,diff).c_str()));
           int pos3 = ligne.find(":");
           letter.push_back(ligne.substr(pos2+1, 1));
           password.push_back(ligne.substr(pos3+2));
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
    cout << "end read of file";
    int count = 0;
    for (int i = 0; i < letter.size(); i++)
    {
        for (int j = 0; password[i][j] != '\0' ; j++) {
            if (password[i][j] == letter[i][0])
            {
                count++;
            }
        }
        if (count >= min_password[i] && count <= max_password[i])
        {
            correct++;
        }
        count = 0;
    }
    cout << " " << correct;
    return 0;
}
